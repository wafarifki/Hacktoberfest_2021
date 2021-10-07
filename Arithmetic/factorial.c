#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int		i;
	long	fact;

	i = nb - 1;
	fact = nb;
	if (fact < 0)
		return (0);
	else if (fact == 0)
		return (1);
	else
	{
		while (i != 0)
		{
			fact *= i;
			i--;
		}
		return (fact);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
    {
		printf("You must introduce executable plus an integer positive number (example: ./a.out 9)\n");
        exit (0);
    }
    printf("The factorial of the number %d is %d \n", atoi(argv[1]), ft_iterative_factorial(atoi(argv[1])));
	return (0);
}