/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbayrakt <tbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:47:20 by tbayrakt          #+#    #+#             */
/*   Updated: 2024/02/29 11:24:52 by tbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	chrc;
	int		backCounter;

	chrc = (char)c;
	// Find the length of string to loop back
	backCounter = ft_strlen(s);
	// Loop through to find matching
	while (backCounter >= 0)
	{
		if (s[backCounter] == chrc)
			return ((char *)s + backCounter);
		backCounter--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	test[] = "Hello";
// 	char	*result;

// 	result = ft_strrchr(test, 'o');
// 	if (result != NULL)
// 		printf("Character 'o' found at position: %ld\n", result - test);
// 	else
// 		printf("Character not found\n");
// 	return (0);
// }