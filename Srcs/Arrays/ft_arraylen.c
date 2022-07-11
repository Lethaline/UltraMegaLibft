/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:17:01 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/23 22:27:55 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

size_t	ft_arraylen(const void *array)
{
	size_t	i;

	i = 0;
	while (((void **)array)[i] != NULL)
		i++;
	return (i);
}
