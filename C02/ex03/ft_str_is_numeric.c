/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 05:35:32 by anpayot           #+#    #+#             */
/*   Updated: 2024/08/26 05:35:34 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int ft_str_is_numeric(char *str);

int main() {
    printf("Test 1: %d\n", ft_str_is_numeric("123456"));        // Expected: 1
    printf("Test 2: %d\n", ft_str_is_numeric("123a456"));       // Expected: 0
    printf("Test 3: %d\n", ft_str_is_numeric(""));              // Expected: 1
    printf("Test 4: %d\n", ft_str_is_numeric("000987"));        // Expected: 1
    printf("Test 5: %d\n", ft_str_is_numeric("9876543210"));    // Expected: 1
    printf("Test 6: %d\n", ft_str_is_numeric("123 456"));       // Expected: 0
    printf("Test 7: %d\n", ft_str_is_numeric("42Lausanne"));    // Expected: 0

    return 0;
}
*/