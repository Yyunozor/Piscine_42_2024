/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:18:54 by anpayot           #+#    #+#             */
/*   Updated: 2024/08/25 21:19:12 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main() {
    char src1[] = "Hello, World!";
    char dest1[50];
    char src2[] = "42 Lausanne";
    char dest2[50];
    char src3[] = "Ja Wohl";
    char dest3[50];

    ft_strcpy(dest1, src1);
    printf("Source: %s\n", src1);
    printf("Destination: %s\n\n", dest1);

    ft_strcpy(dest2, src2);
    printf("Source: %s\n", src2);
    printf("Destination: %s\n\n", dest2);

    ft_strcpy(dest3, src3);
    printf("Source: '%s'\n", src3);
    printf("Destination: '%s'\n\n", dest3);

    return 0;

}
*/