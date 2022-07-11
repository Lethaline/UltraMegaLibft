/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_space.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:26:14 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/11 12:29:31 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_str_is_space(char *str)
{
	while (*str)
	{
		if (ft_isspace(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
