/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:29:06 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/20 19:28:44 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*first;

	first = 0;
	while (*s)
	{
		if (*s == (unsigned char) c)
		{
			first = (char *)s;
			return (first);
		}
		++s;
	}
	if (!c)
		first = ((char *)s);
	return (first);
}
