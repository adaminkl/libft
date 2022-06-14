/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:06:33 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/14 10:25:35 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*res;
	int		start;

	start = 1;
	res = NULL;
	while (lst)
	{
		temp = ft_lstnew(lst->content);
		temp->content = f(temp->content);
		if (temp == NULL)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		if (!start)
			ft_lstadd_back(&res, temp);
		else
			res = temp;
		start = 0;
		lst = lst->next;
	}
	return (res);
}
