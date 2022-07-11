/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:44:02 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/10 17:44:52 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_str_is_alnum(char *str)
{
	while (*str)
	{
		if (ft_isalnum(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
