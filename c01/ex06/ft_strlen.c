#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	while (str[i] != '\0')
	{
		a = i + 1;
		i++;
	}
	return (a);
}

// #include <unistd.h>

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

// #include <stdio.h>

// int    main()
// {
//     int i;

//     i = ft_strlen("chat");
//     printf("%d", i);
// 	return (0);
// }