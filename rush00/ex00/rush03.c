/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:30:58 by anpayot           #+#    #+#             */
/*   Updated: 2024/08/24 16:33:10 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_first_last(int length, char start, char middle, char end)
{
	int	i;

	ft_putchar(start);
	if (length > 1)
	{
		i = 1;
		while (i < length - 1)
		{
			ft_putchar(middle);
			i++;
		}
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	print_middle(int width, int height, char side, char middle)
{
	int	i;
	int	j;

	i = 1;
	while (i < height - 1)
	{
		ft_putchar(side);
		if (width > 1)
		{
			j = 1;
			while (j < width - 1)
			{
				ft_putchar(middle);
				j++;
			}
			ft_putchar(side);
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_first_last(x, 'A', 'B', 'C');
		if (y > 1)
		{
			print_middle(x, y, 'B', ' ');
			print_first_last(x, 'A', 'B', 'C');
		}
	}
	else
	{
		write(1, "Merci d'indiquer des chiffres/nombres superieurs à 0!", 54);
	}
}
