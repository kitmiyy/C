unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (i < size - 1)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		else
		{
			dest[i] = '\0';
			i++;
		}
	}
	dest[i] = '\0';
	while (src[a] != '\0')
		a++;
	return (a);
}

// #include <stdio.h>

// int	main ()
// {
// 	char *src = "December";
// 	char dest[20] = "Paris";
//     int size = 20;

// 	printf("%s\n", dest);
// 	printf("%u\n", ft_strlcpy(dest, src, size));
// 	printf("%s\n", dest);
// 	return (0);
// }
