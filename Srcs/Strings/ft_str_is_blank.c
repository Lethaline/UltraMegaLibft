/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_blank.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:39:45 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/11 12:40:35 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_str_is_blank(char *str)
{
	while (*str)
	{
		if (ft_isblank(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
