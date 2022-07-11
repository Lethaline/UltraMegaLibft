/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:59:34 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/11 12:01:22 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (ft_islower(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
