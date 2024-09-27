/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:32:00 by anpayot           #+#    #+#             */
/*   Updated: 2024/08/22 18:46:41 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}
/*
int	main(void)
{
	ft_putstr("42, c'est vraiment sympa");
	write(1, "\n", 1);
	ft_putstr("oulalalala!");
	write(1, "\n", 1);
}
*/
