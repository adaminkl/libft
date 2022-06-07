/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:54:35 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/07 19:06:41 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	The function int strncmp(const char *str1, const char *str2, size_t n) 
	compares at most the first n bytes of str1 and str2. */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while ((n > 0) && (*str1 == *str2) && (*str1 != '\0'))
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*str1 - (unsigned char) *str2);
}
