/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:38:45 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/11 15:46:47 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

static int	ft_is_in(char c, char *searchedChars)
{
	while (*searchedChars)
	{
		if (*searchedChars == c)
			return (1);
		searchedChars++;
	}
	return (0);
}

char	*ft_strpbrk(char *str, char *searchedChars)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_in(str[i], searchedChars) == 1)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
