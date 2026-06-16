char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int    main()
{
    char dest[10] = "Papa";
    char *src;

    src = "Maman";
    printf("%s", ft_strcat(dest, src));
	return (0);
}