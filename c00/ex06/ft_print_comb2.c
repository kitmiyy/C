#include <unistd.h>

void	ft_write_number(int z)
{
	char	a;
	char	b;

	a = (z / 10) + 48;
	b = (z % 10) + 48;
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_write_number(x);
			write(1, " ", 1);
			ft_write_number(y);
			if (x != 98 || y != 99)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
	write(1, "\n", 1);
}

// int	main()
// {
// 	ft_print_comb2();
// 	return (0);
// }