/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:04:58 by lolemmen          #+#    #+#             */
/*   Updated: 2022/05/30 16:22:42 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
