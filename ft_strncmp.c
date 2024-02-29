/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbayrakt <tbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:05:34 by tbayrakt          #+#    #+#             */
/*   Updated: 2024/02/29 12:18:35 by tbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	// Initialize index counter
	i = 0;
	// Loop through the strings and compare up to n characters
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (s1[i] - s2[i]);
		// If characters are different, return their difference
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	// If all characters are equal, return 0
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[] = "Hello";
// 	char	str2[] = "Hello, World";

// 	int result = ft_strncmp(str1, str2, 3); // Compare first 3 characters
// 	if (result == 0)
// 		printf("The first 3 characters of str1 and str2 are equal.\n");
// 	else if (result < 0)
// 		printf("The first 3 characters of str1 are less than str2.\n");
// 	else
// 		printf("The first 3 characters of str1 are greater than str2.\n");
// 	return (0);
// }
