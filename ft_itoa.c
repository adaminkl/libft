/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:10:39 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/09 17:50:57 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	total_digits(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	if (n < 0)
	{
		n = -1 * n;
		i++;
	}
	i = i + total_digits(n);
	str = malloc(sizeof(char) * (i + 1));
	str[i] = '\0';
	while (n > 0)
	{
		str[i - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	if (i == 1)
		str[0] = '-';
	return (str);
}
