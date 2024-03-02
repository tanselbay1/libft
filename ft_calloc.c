/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbayrakt <tbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:26:03 by tbayrakt          #+#    #+#             */
/*   Updated: 2024/03/02 15:04:16 by tbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	unsigned char	*tmp;

	// Check for potential overflow or invalid arguments
	if (count != 0 && size != 0 && count > (UINT_MAX / size))
		return (NULL);
	// Calculate the total size to allocate
	total_size = count * size;
	// Allocate memory using malloc
	tmp = (unsigned char *)malloc(total_size);
	// Check if memory allocation was succesfull
	if (tmp == NULL)
		// If successfull, initialize the allocated memory to zero
		return (NULL);
	ft_bzero(tmp, total_size);
	// Return the pointer to the allocated memory
	return (tmp);
}
// #include <stdio.h>
// #include <stdlib.h>

// Include the ft_calloc function implementation here

// int	main(void)
// {
// 	int	*array1;
// 	int	*array2;

// 	// Test case 1: Allocate memory for an array of 5 integers
// 	array1 = (int *)ft_calloc(5, sizeof(int));
// 	if (array1 == NULL)
// 	{
// 		printf("Memory allocation failed for test case 1\n");
// 		return (1); // Return error code
// 	}
// 	// Print the elements of the array (should be initialized to zero)
// 	printf("Test case 1: Array elements (initialized to zero):\n");
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d ", array1[i]);
// 	}
// 	printf("\n");
// 	// Free the allocated memory
// 	free(array1);
// 	// Test case 2: Allocate memory for an array of 0 elements (should return NULL)
// 	array2 = (int *)ft_calloc(0, sizeof(int));
// 	if (array2 != NULL)
// 	{
// 		printf("Test case 2 failed: Memory allocation should return (NULL\n");
// 		return (1); // Return error code
// 	}
// 	printf("Test case 2: Memory allocation returned NULL (as expected)\n");
// 	return (0); // All test cases passed
// }
