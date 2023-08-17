/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_check.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:25:07 by cwenz             #+#    #+#             */
/*   Updated: 2023/08/17 15:11:55 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CHECK_H

# define LIBFT_CHECK_H
# include "../libft.h"

/**
 * @brief Checks if the given char is an alphanumeric number
 * @param c The char to be checked
 * @return Returns 1 if it is an alphanumeric or 0 if its not
 */
int	ft_isalnum(int c);

/**
** @brief Checks if the given char is an alphabetical char
** @param c The char to be checked
** @return Returns 1 if its an alphabetical char or 0 if false
*/
int	ft_isalpha(int c);

/**
** @brief Checks if the given char is an ascii value
** @param c The char to be checked
** @return Returns 1 if its an ascii value and 0 if false
*/
int	ft_isascii(int c);

/**
** @brief Checks if the given value is a digit
** @param c The value to be checked
** @return Returns 1 if its a digit and 0 if false
*/
int	ft_isdigit(int c);

/**
** @brief Checks if the given value is printable
** @param c the value to be checked
** @return Returns 1 if the value is printable and 0 if false
*/
int	ft_isprint(int c);

#endif /* LIBFT_CHECK_H */