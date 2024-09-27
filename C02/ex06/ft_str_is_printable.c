/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 06:28:09 by anpayot           #+#    #+#             */
/*   Updated: 2024/08/26 06:28:10 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int ft_str_is_printable(char *str);

int main() {
    printf("Test 1: %d\n", ft_str_is_printable("Hello, World!"));     //: 1
    printf("Test 2: %d\n", ft_str_is_printable("Printable123!@#"));   //: 1
    printf("Test 3: %d\n", ft_str_is_printable(""));                  //: 1
    printf("Test 4: %d\n", ft_str_is_printable("Hello\tWorld"));      //: 0
    printf("Test 5: %d\n", ft_str_is_printable("Hello\nWorld"));      //: 0
    printf("Test 6: %d\n", ft_str_is_printable(" \n"));               //: 0
    printf("Test 7: %d\n", ft_str_is_printable("AllPrintable!@#"));   //: 1

    return 0;
}
*/