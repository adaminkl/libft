/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:18:36 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/09 12:30:17 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The strnstr() function locates the first occurrence of the null-terminated 
	string needle in the string haystack, where not more than len characters 
	are searched. */

#include "libft.h"

char	*ft_strnstr(char *src, char *find, size_t len)
{
	size_t	s;	
	size_t	f;

	s = 0;
	f = 0;
	if (find[f] == '\0')
		return (src);
	while ((find[s] != '\0') && s < len)
	{
		while (src [s + f] == find [f] && src [s + f] != '\0')
			f++;
		if (find[f] == '\0')
			return (src + s);
		s++;
		f = 0;
	}
	return (0);
}
