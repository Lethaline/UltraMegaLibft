/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrbylen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:35:03 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/10 13:57:05 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_putstrlen(char *str, int len)
{
	int	i;

	i = 0;
	while (str[i] && i < len)
	{
		i += ft_putchar(str[i]);
	}
	return (i);
}
