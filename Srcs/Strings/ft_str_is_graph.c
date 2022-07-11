/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_graph.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:48:33 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/11 12:49:20 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_str_is_graph(char *str)
{
	while (*str)
	{
		if (ft_isgraph(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
