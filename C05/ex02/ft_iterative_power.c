/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:50:00 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/02 20:50:01 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ceciesttrestrestrespuissant;

	ceciesttrestrestrespuissant = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		ceciesttrestrestrespuissant *= nb;
		power--;
	}
	return (ceciesttrestrestrespuissant);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_iterative_power(3, 3);
	}

	else
		return (0);

}
*/