/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:56:40 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/09 17:56:42 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *array;
	int size;
	int i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = malloc(sizeof(int) * size);
	if (!array)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (size);
}

/*
#include <stdio.h>
int main(void)
{
	int *array;
	int min = -5;
	int max = 5;
	int size;
	int i = 0;

	size = ft_ultimate_range(&array, min, max);
	if (size > 0)
	{
		while (i < size)
		{
			printf("%d ", array[i]);
			i++;
		}
		printf("\n");
		free(array);
	}
	else if (size == 0)
	{
		printf("min >= max\n");
	}
	else
	{
		printf("malloc failed\n");
	}

	return 0;
}
*/