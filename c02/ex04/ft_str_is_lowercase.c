int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main ()
// {
// 	char *str = "kcx";

//     printf("%d\n", ft_str_is_lowercase(str));
// 	return (0);
// }