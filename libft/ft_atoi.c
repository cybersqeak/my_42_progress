#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	if (!(nptr))
	{
		return (0);
	}
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while ('0' <= *nptr && *nptr <= '9')
	{
		result = result * 10 + (int)*nptr - '0';
		nptr++;
	}
	return (result * sign);
}

/*

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("the real atoi returns : %d\n",atoi(argv[argc - 1]));
		printf("the fake atoi returns : %d\n",ft_atoi(argv[argc - 1]));
		return (0);
	}
	return (1);
}


*/
