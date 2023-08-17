/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_conversion.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:18:19 by cwenz             #+#    #+#             */
/*   Updated: 2023/08/17 15:10:15 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CONVERSION_H
# define LIBFT_CONVERSION_H

# include "../libft.h"

/**
** @brief Converts a string of characters representing an integer value 
** 		into an actual integer value
** @param str String to convert to int
** @return Returns the int value of the passed string
*/
int		ft_atoi(const char *str);

/**
** @brief Returns a string representing the integer received as an argument.
** @param n Int to convert
** @return The string representing the int or NULL if allocaiton fails
*/
char	*ft_itoa(int n);

#endif /* LIBFT_CONVERSION_N */