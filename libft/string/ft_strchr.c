/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:18:36 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/24 16:48:40 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
** @brief Searches for the first occurrence of a character in a string 
**		 and returns a pointer to that character or a null pointer 
**		 if the character is not found.
** @param s Pointer to the string to be searched 
** @param c Character to be located
** @return Returns a pointer to the first occurrence of the character
*/
char	*ft_strchr(const char *s, int c)
{
	char	*ptr_s;

	ptr_s = (char *) s;
	if (*ptr_s == (char)c)
		return (ptr_s);
	while (*ptr_s++)
		if (*ptr_s == (char)c)
			return (ptr_s);
	return (0);
}
