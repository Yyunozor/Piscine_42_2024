/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 06:18:05 by anpayot           #+#    #+#             */
/*   Updated: 2024/08/26 06:18:07 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
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
    printf("Test 1: %d\n", ft_str_is_lowercase("hello"));        // Expected: 1
    printf("Test 2: %d\n", ft_str_is_lowercase("Hello"));        // Expected: 0
    printf("Test 3: %d\n", ft_str_is_lowercase(""));             // Expected: 1
    printf("Test 4: %d\n", ft_str_is_lowercase("world"));        // Expected: 1
    printf("Test 5: %d\n", ft_str_is_lowercase("world123"));     // Expected: 0
    printf("Test 6: %d\n", ft_str_is_lowercase("lowercaseonly")); // Expected: 1
    printf("Test 7: %d\n", ft_str_is_lowercase("MixedCase"));    // Expected: 0

    return 0;
}
*/