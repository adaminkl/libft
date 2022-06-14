/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 08:06:04 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/14 08:11:25 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 		ft_lstdelone
	Prototype 			void ft_lstdelone(t_list *lst, void (*del)(void*));
	Parameters 			lst: The node to free.
						del: The address of the function used to delete
						the content.
	Return value None
	External functs. 	free
	Description 		Takes as a parameter a node and frees the memory of
						the node’s content using the function ’del’ given
						as a parameter and free the node. The memory of
						’next’ must not be freed. */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{	
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
