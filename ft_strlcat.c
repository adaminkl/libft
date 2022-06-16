/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:50:53 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/16 15:37:24 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	total_length;

	i = 0;
	while (*dest && i < dstsize)
	{
		++dest;
		++i;
	}
	total_length = ft_strlcpy(dest, src, dstsize - i);
	return (total_length + 1);
}
