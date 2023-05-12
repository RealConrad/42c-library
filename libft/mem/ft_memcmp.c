/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:35:40 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 11:13:21 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"

/**
** @brief Compares 2 blocks of memory
** @param s1 Pointer to the 1st block of memory
** @param s2 Pointer to the 2nd block of memory
** @param n The number of bytes to compare
** @return Returns 0 if both are identical or returns the difference between
**	the 1st and 2nd blocks of memory
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;
	size_t				i;

	i = 0;
	ptr_s1 = (const unsigned char *)s1;
	ptr_s2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (*ptr_s1 < *ptr_s2 || *ptr_s1 > *ptr_s2)
			return (*ptr_s1 - *ptr_s2);
		ptr_s1++;
		ptr_s2++;
		i++;
	}
	return (0);
}
