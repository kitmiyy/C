#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	c;
	int	d;

	c = a / b;
	d = a % b;
	*div = c;
	*mod = d;
}
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int    main()
// {
//     int a;
//     int b;
//     int div;
//     int mod;

// 	a = 10;
// 	b = 2;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf(" div = %d, mod = %d ", div, mod);
// 	return (0);
// }