/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:45:22 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 11:15:29 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"

/**
** @brief Sets a block of memory to a specified value 
** @param str Starting address of the memory block to be set
** @param c The value to be set
** @param len Number of bytes to be set
** @return Returns a pointer to void
*/
void	*ft_memset(void *str, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*ch;

	ch = str;
	i = 0;
	while (i < len)
	{
		ch[i] = c;
		i++;
	}
	return (str);
}
