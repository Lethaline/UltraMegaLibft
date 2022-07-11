/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:15:53 by lolemmen          #+#    #+#             */
/*   Updated: 2022/05/30 16:23:00 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	i;

	result = (void *)malloc(size * count * sizeof(void));
	if (!result)
		return (NULL);
	if (size == 0)
		size = 1;
	i = count * size;
	if (i / size != count)
		return (NULL);
	ft_bzero(result, count * size);
	return (result);
}
