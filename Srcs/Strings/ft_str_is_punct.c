/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_punct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:45:44 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/11 12:46:41 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_str_is_punct(char *str)
{
	while (*str)
	{
		if (ft_ispunct(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
