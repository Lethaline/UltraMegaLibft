/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 11:38:20 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/12 11:52:00 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

static int	ft_is_in(char c, char *separators)
{
	while (*separators)
	{
		if (*separators == c)
			return (1);
		separators++;
	}
	return (0);
}

static int	ft_strnew(char *str, char *separators)
{
	int	i;

	i = 0;
	while (str[i] && (ft_is_in(str[i], separators) == 0))
		i++;
	return (i);
}

char	*ft_strtok(char *str, char *separators)
{
	char	*res;
	int		len;
	int		i;

	i = 0;
	if (!str || !separators)
		return (NULL);
	len = ft_strnew(str, separators);
	res = (char *)malloc(sizeof(char) * len);
	if (!res)
		return (NULL);
	while (str[i] && i < len)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
