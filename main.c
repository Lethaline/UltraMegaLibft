/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:12:10 by lolemmen          #+#    #+#             */
/*   Updated: 2022/07/18 14:41:38 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

size_t ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char *str;
	int	i;

	str = (char *)s;
	i = (ft_strlen(str) - 1);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	if (str[i] == 0 && c == 0)
		return ((char *)&str[i]);
	return (NULL);
}


int	main(void)
{
	char *c = "Bonjour";

	printf("mine : %s\n", ft_strrchr(c, '\0'));
	printf("your : %s\n", strrchr(c, '\0'));
	return (0);
}
