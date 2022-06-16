/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:18:36 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/16 19:52:47 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The strnstr() function locates the first occurrence of the null-terminated 
	string needle in the string haystack, where not more than len characters 
	are searched. */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	length;

	length = len;
	index = 0;
	if (!ft_strlen(needle))
		return ((char *) haystack);
	while (len-- > 0 && *haystack)
	{
		if (*haystack == *needle)
			if (ft_strncmp(needle, haystack, ft_strlen(needle)) == 0)
				if (index + ft_strlen(needle) <= length)
					return ((char *)haystack);
		index++;
		haystack++;
	}
	return (NULL);
}
