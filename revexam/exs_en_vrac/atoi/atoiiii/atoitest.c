
int	ft_atoi(const char *str)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;

	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return res * sign;
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
	char *str = "    +-94342";
	printf("ft_atoi =\t%d\n", ft_atoi(str));
	printf("libatoi =\t%d\n", atoi(str));

	return (0);
}