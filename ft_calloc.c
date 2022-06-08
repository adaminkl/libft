/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:36:03 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/08 20:13:01 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The calloc() function contiguously allocates enough space for count objects 
	that are size bytes of memory each and returns a pointer to the allocated 
	memory.  The allocated memory is filled with bytes of value zero. */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p == 0)
		return (p);
	ft_bzero(p, count * size);
	return (p);
}
