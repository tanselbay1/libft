/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbayrakt <tbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:08:50 by tbayrakt          #+#    #+#             */
/*   Updated: 2024/02/28 17:38:25 by tbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	chrc;

	chrc = (char)c;
	// Loop through to find matching
	while (*s)
	{
		if (*s == chrc)
			return ((char *)s);
		s++;
	}
	// No match found and check if it is null terminator
	// If so return the null teminator
	if (chrc == '\0')
		return ((char *)s);
	// After loop check if the c is NULL
	return (NULL);
}

// int	main(void)
// {
// 	const char	*str = "Hello, world!";
// 	int			ch;
// 	char		*result;

// 	ch = 'o';
// 	result = ft_strchr(str, ch);
// 	if (result != NULL)
// 	{
// 		printf("Character '%c' found at position: %ld\n", ch, result - str);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found in the string.\n", ch);
// 	}
// 	return (0);
// }
