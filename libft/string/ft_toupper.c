/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:17:48 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 10:53:51 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
** @brief Converts a lowercase char to uppercase
** @param c The char to convert
** @return The char 'c'
*/
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
