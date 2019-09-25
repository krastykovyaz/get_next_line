/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 08:03:49 by lnoisome          #+#    #+#             */
/*   Updated: 2019/09/19 10:47:25 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*s1;
	const char	*s2;
	char		*i;
	const char	*j;

	if (dst == 0 && src == 0)
		return (0);
	s1 = (char*)dst;
	s2 = (char*)src;
	if (s1 < s2)
	{
		while (len--)
		{
			*s1++ = *s2++;
		}
	}
	else
	{
		i = s1 + (len - 1);
		j = s2 + (len - 1);
		while (len--)
			*i-- = *j--;
	}
	return (dst);
}
