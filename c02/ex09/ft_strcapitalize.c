char	*ft_strcapitalize(char *str)
{
	int	i;
	int	prev;

	i = 0;
	prev = 0;
	while (str[i] != '\0')
	{
		if ((prev == 0) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if ((prev == 1) && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
			prev = 1;
		else
			prev = 0;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main ()
// {
// 	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";

//     printf("%s\n", ft_strcapitalize(str));
// 	return (0);
// }