/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:45:08 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/20 17:11:38 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	Thisfunction copies len bytes from string src to string dst.  The two 
	strings may overlap; the copy is always done in a non-destructive manner */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*from;
	char	*to;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	from = (char *)src;
	to = (char *)dst;
	i = 0;
	if (to > from)
		while (len-- > 0)
			to[len] = from[len];
	else
	{
		while (i < len)
		{
			to[i] = from[i];
			i++;
		}
	}
	return (dst);
}
