/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:17:26 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/09 16:17:29 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(void)
{
	int	*arr;
	int min = -5;
	int max = 5;
	int i = 0;
	int size = max - min;

	arr = ft_range(min, max);
	if (arr != NULL)
	{
		while (i < size)
		{
			printf("%d ", arr[i]);
			i++;
		}
		free(arr);
	}
	return 0;
}
*/