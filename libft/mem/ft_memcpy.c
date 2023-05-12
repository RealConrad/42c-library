/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:59:12 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 11:13:43 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"

/**
** @brief Copies 'n' bytes from the memory block 'src' to 'dest'. Does not
**	handle overlaping.
** @param dest Pointer to where it must be copied to
** @param src Pointer to the src that must be copied
** @param n Number of bytes to be copied
** @return Returns original value of dest
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*ptr_src;
	char			*ptr_dest;

	ptr_src = (char *)src;
	ptr_dest = (char *)dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}
