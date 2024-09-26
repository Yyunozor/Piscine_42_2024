
int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;

	if(str[i] == '-' || str[i] == '+')
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

#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	printf("ft_atoi \t%d\n", ft_atoi(av[1]));
	printf("atoi \t\t%d\n", atoi(av[1]));
}