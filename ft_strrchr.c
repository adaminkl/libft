/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:59:07 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/07 16:21:14 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	The C library function char *strrchr(const char *str, int c) searches 
	for the last occurrence of the character c (an unsigned char) in the 
	string pointed to, by the argument str. */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*find;
	char	*find2;
	int		i;

	find = (char *) str;
	find2 = 0;
	i = 0;
	while (*(find + i))
	{
		if (*(find + i) == c)
			find2 = find + i;
		i++;
	}
	if (c == '\0')
		return (find + i);
	return (find2);
}
