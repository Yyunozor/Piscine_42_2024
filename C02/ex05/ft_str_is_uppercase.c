/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 06:21:54 by anpayot           #+#    #+#             */
/*   Updated: 2024/08/26 06:21:56 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main() {
    printf("Test 1: %d\n", ft_str_is_uppercase("HELLO"));        // Expected: 1
    printf("Test 2: %d\n", ft_str_is_uppercase("Hello"));        // Expected: 0
    printf("Test 3: %d\n", ft_str_is_uppercase(""));             // Expected: 1
    printf("Test 4: %d\n", ft_str_is_uppercase("WORLD"));        // Expected: 1
    printf("Test 5: %d\n", ft_str_is_uppercase("WORLD123"));     // Expected: 0
    printf("Test 6: %d\n", ft_str_is_uppercase("UPPERCASEONLY")); // Expected: 1
    printf("Test 7: %d\n", ft_str_is_uppercase("MIxEDCaSE"));    // Expected: 0

    return 0;
}
*/