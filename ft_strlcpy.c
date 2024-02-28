/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbayrakt <tbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:15:14 by tbayrakt          #+#    #+#             */
/*   Updated: 2024/02/28 12:18:22 by tbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	// Initialize a variable 'i' to keep track
	// of the current position in the source string.
	i = 0;
	// Check if the size of the destination buffer is
	// greater than zero to avoid undefined behavior.
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	// Count the length of the source string to return
	while (src[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	char src[] = "Hello, World!";
// 	char dst[20]; // Destination buffer

// 	// Copy src to dst using ft_strlcpy
// 	size_t length = ft_strlcpy(dst, src, sizeof(dst));

// 	// Print the copied string and its length
// 	printf("Copied String: %s\n", dst);
// 	printf("Length of Copied String: %zu\n", length);

// 	return (0);
// }