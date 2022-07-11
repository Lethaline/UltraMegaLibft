/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:30:33 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/11 12:34:53 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (ft_isprint(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
