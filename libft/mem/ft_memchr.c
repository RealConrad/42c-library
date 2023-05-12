/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 08:58:41 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 11:13:09 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"

/**
** @brief  searches a block of memory for a specific byte value and 
**		returns a pointer to the first occurrence of the byte value,
**		or NULL if the byte value is not found.
** @param s The memory block to be searched
** @param c The byte value to be searched
** @param n The number of bytes to be searched
** @return Returns a pointer pointing to the first bte value or
** 		NULL if not found
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr_s;
	size_t				i;

	ptr_s = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*ptr_s == (unsigned char)c)
			return ((void *)ptr_s);
		i++;
		ptr_s++;
	}
	return (NULL);
}
