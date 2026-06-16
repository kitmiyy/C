char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[j] != '\0') && (j < nb))
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
    unsigned int nb;

    src = "Maman";
    nb = 4;
    printf("%s", ft_strncat(dest, src, nb));
	return (0);
}
