/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:12:10 by lolemmen          #+#    #+#             */
/*   Updated: 2022/07/09 19:41:45 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/libft.h"
#include "stdio.h"
#include "ctype.h"

int	main(void)
{
	char *c = "-154.5555.555";

	printf("mine : %f\n", ft_atof(c));
	printf("your : %f\n", atof(c));
	return (0);
}
