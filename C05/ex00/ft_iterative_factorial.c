/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:06:06 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/02 15:06:12 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("for 1:\t %d\n", ft_iterative_factorial(1));
	printf("for 2:\t %d\n", ft_iterative_factorial(2));
	printf("for 3:\t %d\n", ft_iterative_factorial(3));
	printf("for 10:\t %d\n", ft_iterative_factorial(10));
	printf("for 16:\t %d\n", ft_iterative_factorial(16));
}
*/
/*
n!
4! = 1 x 2 x 3 x 4 = 24
10! = 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8 x 9 x 10 = 3 628 800
*/