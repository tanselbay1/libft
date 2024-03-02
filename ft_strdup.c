/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbayrakt <tbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:50:43 by tbayrakt          #+#    #+#             */
/*   Updated: 2024/03/02 17:21:43 by tbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

char	*ft_strdup(const char *src)
{
	int			length;
	const char	*src_ptr = src;
	char		*dest;
	const char	*src_ptr2 = src;
	char		*dest_ptr;

	// Find the length of the source str
	length = ft_strlen(src_ptr);
	// Allocate memory for the new string
	dest = (char *)malloc((length + 1) * sizeof(char));
	// Check if memory allocation was successful
	if (dest == NULL)
		return (NULL);
	// Copy the content of the source string to the destination string
	dest_ptr = dest;
	while (*src_ptr2 != '\0')
	{
		*dest_ptr = *src_ptr2;
		src_ptr2++;
		dest_ptr++;
	}
	*dest_ptr = '\0';
	// Return a pointer to the newly allocated string
	return (dest);
}

// void	test_ft_strdup(const char *src)
// {
// 	char	*duplicate;

// 	printf("Source string: %s\n", src);
// 	// Call ft_strdup to duplicate the source string
// 	duplicate = ft_strdup(src);
// 	if (duplicate != NULL)
// 	{
// 		printf("Duplicated string: %s\n", duplicate);
// 		// Check if the duplicated string is identical to the source string
// 		if (strcmp(duplicate, src) == 0)
// 		{
// 			printf("Test passed: Duplicated string is identical to the source string.\n");
// 		}
// 		else
// 		{
// 			printf("Test failed: Duplicated string is different from the source string.\n");
// 		}
// 		// Free the memory allocated for the duplicated string
// 		free(duplicate);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed!\n");
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	// Test cases
// 	test_ft_strdup("Hello, world!");
// 	test_ft_strdup("");
// 	test_ft_strdup("12345");

// 	return (0);
// }