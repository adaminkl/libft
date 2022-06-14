/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:54:23 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/12 18:01:57 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Counts the number of nodes in a list.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst-> next;
	}
	return (i);
}
