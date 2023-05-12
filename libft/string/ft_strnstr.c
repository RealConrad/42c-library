/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:36:32 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 11:06:42 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_string.h"

/**
** @brief Locates the first occurance of string 'needle' and searches for 'len'
**	bytes
** @param haystack The string to see if 'needle' can be found
** @param needle The string to look for
** @param len Number of bytes to search
** @return If needle is not found, NULL is returned. if needle is an empty
**	string, haystack is returned. If needle is found, a pointer to the first
**	occurance of needle is returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		k;

	i = 0;
	k = 0;
	if (!*needle)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[k])
		{
			while ((i + k) < len && haystack[i + k] == needle[k])
			{
				k++;
				if (!needle[k])
					return ((char *)haystack + i);
			}
			k = 0;
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main()
{
	printf("%s\n", ft_strnstr("This is the haystack", "is", 2));
	
	return (0);
}
*/
