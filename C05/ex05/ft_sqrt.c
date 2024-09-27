/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:29:58 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/03 20:30:00 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("rc de 0:\t%d\n", ft_sqrt(0));
	printf("rc de 9:\t%d\n", ft_sqrt(9));
	printf("rc de 25:\t%d\n", ft_sqrt(25));
	printf("rc de 100:\t%d\n", ft_sqrt(100));
}
*/
