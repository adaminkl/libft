/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:41:43 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/07 10:41:52 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	counter;

	index = 0;
	while (src[index] != '\0')
		index++;
	counter = 0;
	if (size != 0)
	{
		while (src[counter] != '\0' && counter < size - 1)
		{
			dest[counter] = src[counter];
			counter++;
		}	
		dest[counter] = '\0';
	}
	return (index);
}
