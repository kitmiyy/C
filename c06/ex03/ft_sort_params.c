#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
    int j;
    char *a;

	i = 1;
    j = 0;
    while (i < argc - 1)
    {
        if (argv[i][j] - argv[i + 1][j] > 0)
        {
        *a = argv[i];
        argv[i] = argv[i + 1];
        argv[i + 1] = *a;
        }
    i++;
    }
	while (argv[i][j] != '\0')
	{
		write(1, &argv[i][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
