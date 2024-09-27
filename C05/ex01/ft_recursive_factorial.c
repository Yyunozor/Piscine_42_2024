/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:15:28 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/02 16:15:30 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb -1));
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	if(ac == 2)
	{
		int number = atoi(av[1]);
		printf("%d\n", ft_recursive_factorial(number));
		return (0);
	}
}
*/