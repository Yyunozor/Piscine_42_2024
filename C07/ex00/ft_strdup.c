/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:22:15 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/05 15:22:16 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	i = -1;
	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
/*
int	main(int ac, char **av)
{
	(void) ac;
	(void) av;

	char	*str = "salut";
	char	*dup = ft_strdup(str);

	printf("ft_strdup: %s\t\n", ft_strdup(dup));

	printf("strdup orginial: %s\t\n", strdup(dup));

	free(dup);
	return (0);
}
*/