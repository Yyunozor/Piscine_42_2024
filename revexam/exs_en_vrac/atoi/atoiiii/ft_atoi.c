
int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	
	if(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return res * sign;
}

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	const char	*strnbr = av[1];
	printf("atoilib \t%d\n", atoi(strnbr));
	printf("ft_atoi \t%d\n", ft_atoi(strnbr));

	return 0;
}