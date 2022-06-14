/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:01:46 by adahmad           #+#    #+#             */
/*   Updated: 2022/06/13 17:12:28 by adahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the string ’s’ to the given file descriptor followed by a newline

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
		write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
