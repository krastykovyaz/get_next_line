/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 15:03:46 by szheng            #+#    #+#             */
/*   Updated: 2019/09/24 21:14:00 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		add_line(char **m_stack, char **line)
{
	int		c;
	char	*t_stack;

	c = 0;
	while ((*m_stack)[c] != '\n' && (*m_stack)[c] != '\0')
		c++;
	if ((*m_stack)[c] == '\n')
	{
		*line = ft_strsub(*m_stack, 0, c);
		t_stack = ft_strdup(&((*m_stack)[c + 1]));
		free(*m_stack);
		*m_stack = t_stack;
		if ((*m_stack)[0] == '\0')
			ft_strdel(m_stack);
	}
	else
	{
		*line = ft_strdup(*m_stack);
		ft_strdel(m_stack);
	}
	return (1);
}

int		res(char **m_stack, char **line, int carriage, int fd)
{
	if (carriage < 0)
		return (-1);
	else if (carriage == 0 && m_stack[fd] == NULL)
		return (0);
	else
		return (add_line(&m_stack[fd], line));
}

int		get_next_line(const int fd, char **line)
{
	int			carriage;
	static char	*m_stack[FD_SIZE];
	char		buf[BUFF_SIZE + 1];
	char		*t_stack;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((carriage = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[carriage] = '\0';
		if (m_stack[fd] == NULL)
			m_stack[fd] = ft_strdup(buf);
		else
		{
			t_stack = ft_strjoin(m_stack[fd], buf);
			free(m_stack[fd]);
			m_stack[fd] = t_stack;
		}
		if (ft_strchr(m_stack[fd], '\n'))
			break ;
	}
	return (res(m_stack, line, carriage, fd));
}
