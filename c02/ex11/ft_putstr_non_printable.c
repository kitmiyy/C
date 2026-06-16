#include <unistd.h>

void	ft_write_hexadecimal(int i)
{
	char	a;
	char	b;

	a = (i / 16);
	b = (i % 16);

    if (a <= 9)
        a = a + '0';
    else
        a = a - 10 + 'a';

    if (b <= 9)
        b = b + '0';
    else
        b = b - 10 + 'a';
	write(1, &a, 1);
	write(1, &b, 1);
}

void ft_putstr_non_printable(char *str)
{
   int i;

   i = 0;
    while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
        {
            write (1, "\\", 1);
            ft_write_hexadecimal(str[i]);
        }
        else
        {
         write (1, &str[i],1);
        }
        i++;
	}
}
#include <stdio.h>

int    main()
{
    char str[] = "Hello\nHow are you?";
    ft_putstr_non_printable(str);
    return (0);
}