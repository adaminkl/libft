/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:29:06 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/07 15:41:29 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The C library function char *strchr(const char *str, int c) searches for the 
   first occurrence of the character c (an unsigned char) in the string pointed 
   to by the argument str. */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if ((char)c == str[i])
		return ((char *)&str[i]);
	return (NULL);
}
