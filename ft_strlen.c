/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbayrakt <tbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:00:02 by tbayrakt          #+#    #+#             */
/*   Updated: 2024/02/17 17:36:08 by tbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

unsigned int	ft_strlen(char *str)
{
	int	counter;

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
// 	char word[10] = "";

// 	printf("Length of word is: %d\n", ft_strlen(word));
// 	printf("Length of word in original function is: %lu\n", strlen(word));
// 	return (0);
// }