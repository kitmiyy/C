char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	int	i;

	i = 0;
	while (i < n)
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
	return (dest);
}

#include <stdio.h>

int	main ()
{
	char *src = "December";
	char dest[20] = "Paris";
    int n = 10;

	printf("%s\n", dest);
	ft_strncpy (dest, src, n);
	printf("%s\n", dest);
	return (0);
}