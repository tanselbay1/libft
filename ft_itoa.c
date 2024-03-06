/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbayrakt <tbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:53:37 by tbayrakt          #+#    #+#             */
/*   Updated: 2024/03/06 16:56:20 by tbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// Function to count the number of digits in an integer
int	count_digits(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

// Function to convert an integer to a string
char	*int_to_string(int n, int num_digits)
{
	char	*str;
	int		i;

	// Special case for 0 and minimum integer value
	if (num_digits <= 0)
	{
		if (n == 0)
			return (ft_strdup("0"));
		else if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		// Calculate the number of digits again for negative numbers
		num_digits = count_digits(-n);
	}
	str = (char *)malloc((num_digits) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = num_digits - 1;
	while (n != 0)
	{
		str[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}

// Main function to handle negative numbers and allocate memory
char	*ft_itoa(int n)
{
	int		num_digits;
	char	*str;

	// Max number
	// if (n == -2147483648)
	// 	return (ft_strdup("-2147483648"));
	num_digits = count_digits(n);
	// Add one for negative sign if applicable
	if (n < 0)
		num_digits++;
	// Allocate memory for the string
	str = int_to_string(n, num_digits);
	if (str == NULL)
		return (NULL);
	// Handle the case of negative numbers
	if (n < 0)
		str[0] = '-';
	// Null-terminate the string
	str[num_digits] = '\0';
	return (str);
}
