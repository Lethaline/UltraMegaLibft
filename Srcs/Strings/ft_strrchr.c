/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:59:05 by lolemmen          #+#    #+#             */
/*   Updated: 2022/05/30 16:24:06 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		check;
	char	*str;

	str = (char *)s;
	i = 0;
	check = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			check = i;
		i++;
	}
	if (check > 0 || (unsigned char)str[0] == (unsigned char)c)
		return (&str[check]);
	if (str[i] == 0 && c == 0)
		return (&str[i]);
	return (NULL);
}
