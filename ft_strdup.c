/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:42:31 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/08 19:23:57 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The strdup() function allocates sufficient memory for a copy of the string 
	s1, does the copy, & returns a pointer to it.  The pointer may subsequently 
	be used as an argument to the function free(3). If insufficient memory is 
	available, NULL is returned and errno is set to ENOMEM. The strndup() 
	function copies at most n characters from the string s1 always NUL terminating
    the copied string. */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		l;

	l = ft_strlen(s1);
	if (s1 == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(*str) * (l + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{	
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
