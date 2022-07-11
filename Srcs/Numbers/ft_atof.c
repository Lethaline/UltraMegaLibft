/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:20:57 by lolemmen          #+#    #+#             */
/*   Updated: 2022/07/10 15:08:35 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"
#include "stdio.h"

static double	ft_atof2(char *str, int i)
{
	double	nb;
	int		afterdot;
	int		dot;

	afterdot = 0;
	dot = 0;
	nb = 0;
	while (((str[i] >= 48 && str[i] <= 57) || str[i] == 46) && str[i])
	{
		if (str[i] == 46 && dot == 1)
			break ;
		if (str[i] == 46 && dot == 0)
			dot = 1;
		if (str[i] != 46)
			nb = nb * 10.0 + (str[i] - 48);
		if (str[i] >= 48 && str[i] <= 57 && dot == 1)
			afterdot++;
		i++;
	}
	while (afterdot > 0)
	{
		nb *= 0.1;
		afterdot--;
	}
	return (nb);
}

double	ft_atof(char *str)
{
	int	minus;
	int	i;

	minus = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	return (ft_atof2(str, i) * minus);
}
