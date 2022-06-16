/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:41:43 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/16 14:49:39 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	unsigned int	index;
	unsigned int	counter;

	index = 0;
	while (src[index] != '\0')
		index++;
	counter = 0;
	if (dstsize != 0)
	{
		while (src[counter] != '\0' && counter < dstsize - 1)
		{
			dest[counter] = src[counter];
			counter++;
		}	
		dest[counter] = '\0';
	}
	return (index);
}
