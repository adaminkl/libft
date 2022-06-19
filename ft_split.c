/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:52:30 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/19 18:58:52 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char	*s, char c)
{
	size_t	str;

	str = 0;
	while (*s)
	{
		if (*s != c)
		{
			str++;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			tab[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	tab[i] = NULL;
	return (tab);
}
