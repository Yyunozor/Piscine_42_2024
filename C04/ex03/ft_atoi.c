/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:29:47 by anpayot           #+#    #+#             */
/*   Updated: 2024/08/29 11:29:49 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str >= 9 && (*str <= 13 || *str == 32))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
// int	ft_atoi_ndex(char *str)
// {
// 	int sign;
// 	int result;
// 	int i;

// 	sign = 1;
// 	result = 0;
// 	i = 0;
// 	while (str[i] >= 9 && (str[i] <= 13 || str[i] == 32))
// 		i++;
// 	while (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			sign *= -1;
// 		i++;
// 	}
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		result = result * 10 + (str[i] - '0');
// 		i++;
// 	}
// 	return (result * sign);
// }

// #include <stdlib.h>
// #include <stdio.h>
// #include <unistd.h>
// int main(void)
// {
// 	write(1, "\n", 1);
// 	printf("test 1 ft_atoi\t\t%d\n", ft_atoi("--+-123"));
// 	printf("test 1 ft_atoindex\t%d\n", ft_atoi_ndex("--+-123"));
// 	// printf("atoi lib\t%d\n", atoi("--+123")); // signs handled differently!
// 	write(1, "\n", 1);
// 	printf("test 2 ft_atoi\t\t%d\n", ft_atoi("++--+++++++9405942"));
// 	printf("test 3 ft_atoindex\t%d\n", ft_atoi_ndex("++--+++++++9405942"));
// 	// printf("atoi lib\t%d\n", atoi(test)); // signs handled differently!
// 	write(1, "\n", 1);
// }