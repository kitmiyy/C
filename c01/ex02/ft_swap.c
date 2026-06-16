void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
// #include <stdio.h>

// int    main()
// {
// 	int	a;
// 	int	b;

// 	a = 1;
// 	b = 2;
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	ft_swap(&a, &b);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	return (0);
// }

// int    main()
// {
// 	int	a;
// 	int	b;

// 	a = 1;
// 	b = 2;
// 	printf(" a = %d, b = %d \n", a, b);
// 	ft_swap(&a, &b);
// 	printf(" a = %d, b = %d \n", a, b);
// 	return (0);
// }