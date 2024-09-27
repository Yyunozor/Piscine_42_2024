/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 02:28:54 by anpayot           #+#    #+#             */
/*   Updated: 2024/08/26 02:28:57 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main(void) 
{
    printf("%d\n", ft_str_is_alpha("Hello"));           // Expected: 1
    printf("%d\n", ft_str_is_alpha("Hello123"));       // Expected: 0
    printf("%d\n", ft_str_is_alpha(""));              // Expected: 1
    printf("%d\n", ft_str_is_alpha("42Lausanne"));   // Expected: 0
    printf("%d\n", ft_str_is_alpha("ABCDEFGH")); 	// Expected: 1
}
*/

/*
int ft_str_is_alpha(char *str) 
{
    while (*str) 
    {
        if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z')) 
        {
            return 0;
        }
        str++;

    return 1;
}
*/