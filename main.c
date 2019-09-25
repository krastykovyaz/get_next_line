#include "get_next_line.h"
#include "stdio.h"
int	main(int ac, char **av)
{
	int	fd;
	int	i;
	char *a;

	i = 0;
	if (ac == 3)
	{
		fd = open(av[1], O_RDONLY);
		while ((get_next_line(fd, &a)) == 1)
		{
			printf("%s\n", a);
			ft_putchar('\n');
		}
		fd = open(av[2], O_RDONLY);
		while ((get_next_line(fd, &a)) == 1)
		{
			printf("%s\n", a);
			ft_putchar('\n');
		}
		close(fd);
	}
	return (0);
}
