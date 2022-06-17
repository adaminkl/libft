/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 20:46:34 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/17 20:46:46 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *s2)
{
	unsigned int	len;
	char			*start;

	if (!s1 || !s2)
		return (NULL);
	while (*s1 && ft_strchr(s2, *s1))
		s1++;
	start = (char *)s1;
	len = ft_strlen(s1);
	while (len && ft_strchr(s2, *(s1 + len)))
		len--;
	return (ft_substr(start, 0, len + 1));
}
