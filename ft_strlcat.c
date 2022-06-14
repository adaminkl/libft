/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:50:53 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/13 18:21:29 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	j = d;
	if (size == 0 || size <= d)
		return (size + s);
	if (d < size - 1 && size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
			dest[j++] = src[i++];
	}
	dest[j] = '\0';
	return (d + s);
}
