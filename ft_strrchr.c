/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:59:07 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/20 19:15:54 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	The C library function char *strrchr(const char *str, int c) searches 
	for the last occurrence of the character c (an unsigned char) in the 
	string pointed to, by the argument str. */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = 0;
	while (*str)
	{
		if (*str == (unsigned char) c)
			last = (char *)str;
		++str;
	}
	if (!c)
		last = ((char *)str);
	return (last);
}
