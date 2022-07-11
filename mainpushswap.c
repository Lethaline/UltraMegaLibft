/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 12:31:53 by lolemmen          #+#    #+#             */
/*   Updated: 2022/06/12 19:54:23 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/libft.h"
#include <ctype.h>
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int *tab1;
	int	*tab2;
	int	i;
	int j;

	i = 0;
	j = 0;
	tab1 = (int *)malloc(sizeof(int) * 10);
	tab2 = (int *)malloc(sizeof(int) * 10);
	if (!tab1 || !tab2)
		return (0);
	while (j < 10)
	{
		tab1[j] = j;
		tab2[j] = j;
		j++;
	}
	ft_push_a(tab1);
	while (i < 10)
	{
		ft_printf("%d | %d\n", tab1[i], tab2[i]);
		i++;
	}
	ft_printf("_____\n");
}
