/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:41:43 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/20 18:08:44 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	unsigned int	index;
	unsigned int	counter;

	index = ft_strlen(src);
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
