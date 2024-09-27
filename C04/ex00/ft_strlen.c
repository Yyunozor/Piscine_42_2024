/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:00:52 by anpayot           #+#    #+#             */
/*   Updated: 2024/08/28 20:00:54 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
#include <stdio.h>
int	main(void)
{
	char test[] = "allo la terre, ici la lune";
	char test2[] = "";
	char test3[] = "mamamia";

	printf("%d\n", ft_strlen(test));
	printf("%d\n", ft_strlen(test2));
	printf("%d\n", ft_strlen(test3));

	return (0);

}
*/