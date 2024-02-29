/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbayrakt <tbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:10:32 by tbayrakt          #+#    #+#             */
/*   Updated: 2024/02/29 14:43:32 by tbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		little_len;
	const char	*big_ptr = big;
	const char	*little_ptr = little;

	// Initialize pointers for comparison | above
	// If little is empty return big
	if (*little == '\0')
		return ((char *)big);
	// Calculate the length of the little
	little_len = 0;
	while (little[little_len] != '\0')
		little_len++;
	// If big length is smaller than little length, no match
	if (len < little_len)
		return (NULL);
	// Search for the little in big
	while (*big_ptr != '\0' && len >= little_len)
	{
		if (*big_ptr == *little_ptr && ft_strncmp(big_ptr, little_ptr,
				little_len) == 0)
			return ((char *)big_ptr);
		big_ptr++;
		len--;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// // Prototype of ft_strnstr function
// char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

// int	main(void)
// {
// 	const char	*haystack1 = "hello world";
// 	const char	*needle1 = "world";
// 	size_t		len1;
// 	char		*result1;
// 	const char	*haystack2 = "hello world";
// 	const char	*needle2 = "world";
// 	char		*result2;
// 	const char	*haystack3 = "hello world";
// 	const char	*needle3 = "foo";
// 	size_t		len3;
// 	char		*result3;

// 	// Test case 1
// 	len1 = strlen(haystack1);
// 	result1 = ft_strnstr(haystack1, needle1, len1);
// 	printf("Test Case 1: Result = %s\n", result1);
// 	// Test case 2
// 	size_t len2 = 5; // Search limited to first 5 characters
// 	result2 = ft_strnstr(haystack2, needle2, len2);
// 	printf("Test Case 2: Result = %s\n", result2);
// 	// Test case 3
// 	len3 = strlen(haystack3);
// 	result3 = ft_strnstr(haystack3, needle3, len3);
// 	printf("Test Case 3: Result = %s\n", result3 ? result3 : "NULL");
// 	return (0);
// }
