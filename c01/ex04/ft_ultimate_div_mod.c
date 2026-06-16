#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

#include <stdio.h>

int    main()
{
    int a;
    int b;

	a = 10;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf(" a = %d, b = %d ", a, b);
	return (0);
}