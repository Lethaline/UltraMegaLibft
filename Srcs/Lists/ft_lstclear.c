/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:48:09 by lolemmen          #+#    #+#             */
/*   Updated: 2022/05/30 16:22:36 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;
	t_list	*next;

	if (lst && *lst && del)
	{
		new = *lst;
		while (new)
		{
			next = new->next;
			ft_lstdelone(new, del);
			new = next;
		}
		*lst = NULL;
	}
}
