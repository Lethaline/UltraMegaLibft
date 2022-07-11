/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_xdigit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:21:08 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/11 12:21:58 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_str_is_xdigit(char *str)
{
	while (*str)
	{
		if (ft_isxdigit(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
