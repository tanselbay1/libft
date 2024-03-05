/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbayrakt <tbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:54:36 by tanselbayra       #+#    #+#             */
/*   Updated: 2024/03/05 10:14:22 by tbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*substring;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	size_t end = start + len; // Calculate the end index of the substring
								// Adjust the end index if it exceeds the length of s
	if (end > s_len)
		end = s_len;
	size_t sub_len = end - start; // Calculate the len of the substr
	substring = (char *)malloc((sub_len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	// Copy chars from the substr in s to the allocated memory
	i = 0;
	while (i < sub_len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[sub_len] = '\0';
	return (substring); // Return a pointer to the allocated substr
}
// #include <stdlib.h>
// #include <stdio.h>

// int main()
// {
//    const char *s = "Hello, World!";
//    unsigned int start = 4;
//    size_t len = 7;

//    char *substr = ft_substr(s, start, len);

//    if (!substr)
//       printf("Substring is NULL\n");
//    else
//       printf("Substring: %s\n", substr);

//    free(substr);

//    return (0);
// }