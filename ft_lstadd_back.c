/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 16:54:18 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/12 17:00:09 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Adds the node ’new’ at the end of the list.

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ls;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ls = *lst;
	while (ls)
	{
		if (!(ls->next))
		{
			ls->next = new;
			return ;
		}
		ls = ls->next;
	}
}
