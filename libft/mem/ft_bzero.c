/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:57:41 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 11:12:23 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"

/**
** @brief Sets a block of memory to 0
** @param str The block of memory to be set to 0
** @param n How many bytes of memory that must be set to 0
*/
void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ch;
	size_t			i;

	i = 0;
	ch = str;
	while (i < n)
	{
		ch[i] = 0;
		i++;
	}
}
