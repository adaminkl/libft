/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:58:31 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/17 08:25:37 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function ’f’ to each character of the string ’s’, and passing 
its index as first argument to create a new string (with malloc(3)) resulting 
from successive applications of ’f’. */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	index;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	index = 0;
	while (s[index])
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = 0;
	return (str);
}
