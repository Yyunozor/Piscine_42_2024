/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:44:44 by anpayot           #+#    #+#             */
/*   Updated: 2024/08/26 01:44:47 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main() {
    char src1[] = "Hello, World!";
    char dest1[20];
    char src2[] = "42 Lausanneeeeeeeeeeeeeeeeeeeeeeeeeeee";
    char dest2[20];

    ft_strncpy(dest1, src1, 5);
    printf("1: '%s'\n", dest1);

    ft_strncpy(dest2, src2, 15);
    printf("2: '%s'\n", dest2);

    return 0;
}
*/