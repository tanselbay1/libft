/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbayrakt <tbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:34:34 by tbayrakt          #+#    #+#             */
/*   Updated: 2024/02/21 14:21:24 by tbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// For testing purposes
# include <ctype.h>
# include <stdio.h>
# include <string.h>

// Required headers
# include <stddef.h>

size_t	ft_strlen(char *str);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalnum(int arg);
int		ft_isdigit(int arg);
int		ft_isalpha(char c);

#endif