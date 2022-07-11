/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_cntrl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:42:33 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/11 12:45:08 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_str_is_cntrl(char *str)
{
	while (*str)
	{
		if (ft_iscntrl(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
