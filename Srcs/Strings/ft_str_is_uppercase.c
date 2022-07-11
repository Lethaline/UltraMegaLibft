/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:06:07 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/11 12:07:45 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (ft_isupper(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
