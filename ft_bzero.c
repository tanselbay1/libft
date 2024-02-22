/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:32:53 by tbayrakt          #+#    #+#             */
/*   Updated: 2024/02/22 21:21:04 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// temporary
void *ft_memset(void *str, int c, size_t n);

void ft_bzero(void *s, size_t n)
{
   ft_memset(s, '\0', n);
}

int main()
{
   char buffer[10];
   ft_bzero(buffer, sizeof(buffer));

   int numbers[5];
   bzero(numbers, 5 * sizeof(int));
   printf("Buffer: %s\nNumbers: %p", buffer, numbers);
   return 0;
}