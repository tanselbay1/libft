/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbayrakt <tbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:00:02 by tbayrakt          #+#    #+#             */
/*   Updated: 2024/02/18 11:42:11 by tbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// #include <stdio.h>
// #include <string.h>

size_t	ft_strlen(char *str)
{
	size_t	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
// int	main(void)
// {
// 	char word[10] = "something";

// 	printf("Length of word is: %zu\n", ft_strlen(word));
// 	printf("Length of word in original function is: %lu\n", strlen(word));
// 	return (0);
// }