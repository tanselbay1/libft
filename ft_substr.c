/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:54:36 by tanselbayra       #+#    #+#             */
/*   Updated: 2024/03/04 21:30:51 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
   if (!s)
      return NULL;

   size_t s_len = strlen(s);

   if (s_len == 0 || start >= s_len)
      return NULL;

   size_t end = start + len; // Calculate the end index of the substring
   if (end > s_len)          // Adjust the end index if it exceeds the length of s
      end = s_len;

   size_t sub_len = end - start; // Calculate the len of the substr
   char *substring = (char *)malloc((sub_len + 1) * sizeof(char));

   if (!substring)
      return NULL;

   // Copy chars from the substr in s to the allocated memory
   size_t i = 0;
   while (i < sub_len)
   {
      substring[i] = s[start + i];
      i++;
   }
   substring[sub_len] = '\0';

   return substring; // Return a pointer to the allocated substr
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

//    return 0;
// }