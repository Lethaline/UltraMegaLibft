/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_ascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:47:15 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/10 17:48:03 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_str_is_ascii(char *str)
{
	while (*str)
	{
		if (ft_isascii(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
