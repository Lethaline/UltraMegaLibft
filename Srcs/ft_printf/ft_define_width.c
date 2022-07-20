/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:26:19 by lolemmen          #+#    #+#             */
/*   Updated: 2022/07/20 18:13:01 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_define_width(int width, int len, int zero)
{
	int	count;

	count = 0;
	while ((width - len - count) > 0)
	{
		if (zero == 1)
			count += ft_putchar('0');
		else
			count += ft_putchar(' ');
	}
	return (count);
}
