/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:50:24 by anpayot           #+#    #+#             */
/*   Updated: 2024/08/22 19:46:47 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		write(1, &str[len++], 1);
	return (len);
}

/*
#include  <stdio.h>
int main(void)
{
    char str[] = "Hello, World!";
    int length;

    length = ft_strlen(str);
    printf("\nLength of the string: %d\n", length);

    return 0;
}
*/