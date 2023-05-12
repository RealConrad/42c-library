/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:30:04 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 14:31:23 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_write.h"

/**
** @brief Outputs the string 's' to the given file descriptor
** @param s The string to ouput
** @param fd The file descriptor to which to write to
*/
void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(s);
	while (i < length)
		ft_putchar_fd(s[i++], fd);
}
