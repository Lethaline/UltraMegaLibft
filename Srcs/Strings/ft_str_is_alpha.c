/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:38:27 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/10 17:41:30 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (ft_isalpha(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
