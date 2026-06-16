// #include <unistd.h>

// void	ft_putstr(char *str)
// {
// 	while (*str != '\0')
// 	{
// 		write(1, *str, 1);
// 		str++;
// 	}
// }

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

#include <stdio.h>

int    main()
{
    ft_putstr("Heartopia");
	return (0);
}

// #include <stdio.h>

// int    main()
// {
//     int i;

//     i = 5;
//     if(i > 0)
//         ft_putstr("Positif");
//     else
//         ft_putstr("Négatif");
// 	return (0);
// }

// int    main()
// {
//     char string[]="leyna";
//     ft_putstr(string);
// 	return (0);
// }
// -> celui-là passe pas à la norminette