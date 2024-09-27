/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:05:26 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/08 22:05:28 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	}
	return (len);
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[6];  // Enough space for "salut" and null-terminator
	char src[] = "salut";
	unsigned int size = 5;

	printf("src length:\t%u\n", ft_strlcpy(dest, src, size));
	printf("dest:\t\t%s\n", dest);
	return (0);
}
*/