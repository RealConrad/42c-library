/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:42:01 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 14:31:03 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_write.h"

/**
** @brief Outputs 's' to the given file descriptor followed by newline
** @param s The string to be output
** @param fd The descriptor to which s is written to
*/
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
