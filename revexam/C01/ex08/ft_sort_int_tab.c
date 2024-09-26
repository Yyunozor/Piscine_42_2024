/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:40:27 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/10 11:40:30 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab [j + 1] = tmp;
			}
			j++;
		}
	i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int tab[] = {5, 3, 4, 1, 2};
	int size = 5;
	int i = 0;

	printf("Original array:\t");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");

	ft_sort_int_tab(tab, size);

	i = 0;
	printf("Sorted array:\t");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");

	return 0;
}
*/