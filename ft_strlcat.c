/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:50:53 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/16 16:02:31 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	index;

	if (dstsize < 1)
		return (ft_strlen(src));
	index = 0;
	while (*dest != '\0' && index < dstsize)
	{
		dest++;
		index++;
	}
	while (*src != '\0' && index < dstsize - 1)
	{
		*dest++ = *src++;
		index++;
	}
	if (index < dstsize)
		*dest = '\0';
	while (*src++ != '\0')
		index++;
	return (index);
}
