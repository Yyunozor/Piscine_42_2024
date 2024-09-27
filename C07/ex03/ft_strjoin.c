/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:14:10 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/11 20:14:11 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcatakalagrandesagouine(char *scated, char *strtoadd)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (scated[i])
		i++;
	while (strtoadd[j])
	{
		scated[i] = strtoadd[j];
		i++;
		j++;
	}
	scated[i] = '\0';
	return (scated);
}

int	ft_strslen(char **strs, int size)
{
	int	i;
	int	savethatshit;

	i = 0;
	savethatshit = 0;
	while (i < size)
	{
		savethatshit += ft_strlen(strs[i]);
		i++;
	}
	return (savethatshit);
}

void	ft_concatenator(char *res, int size, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcatakalagrandesagouine(res, strs[i]);
		if (i < size -1)
			ft_strcatakalagrandesagouine(res, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	int		len_sep;
	char	*res;

	i = 0;
	len = ft_strslen(strs, size);
	len_sep = ft_strlen(sep);
	if (size == 0)
	{
		res = malloc(sizeof(char));
		if (res)
			res[0] = '\0';
		return (res);
	}
	res = malloc(sizeof(char) * (len + len_sep * (size - 1) + 1));
	if (!res)
		return (NULL);
	res[0] = '\0';
	ft_concatenator(res, size, strs, sep);
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"salut", "", "je me", "noie", "dans un pataugeoire"};
	char	*sep = "__,--/'_";
	char	*res = ft_strjoin(5, strs, sep);

	printf("%s", res);
	free(res);
	return (0);
}
*/