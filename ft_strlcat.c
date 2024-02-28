/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbayrakt <tbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:16:01 by tbayrakt          #+#    #+#             */
/*   Updated: 2024/02/28 16:10:33 by tbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	// This is essentially a check to ensure that 'dst' doesn't overflow
	if (dst_len >= size)
		dst_len = size;
	// It means dst is full so return size + stc_len
	if (dst_len == size)
		return (size + src_len);
	// If there's enought space in 'dst' it concatenates
	if (src_len < size - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	// If not, copy as much as dst has space
	else
	{
		ft_memcpy(dst + dst_len, src, size - dst_len - 1);
		dst[size - 1] = '\0';
	}
	// Return the original length of src + dst
	return (dst_len + src_len);
}
// int	main(void)
// {
// 	char dest[10] = "Hello";
// 	char src[] = " World";
// 	ft_strlcat(dest, src, sizeof(dest));

// 	char dest1[5] = "Test";
// 	char src1[] = "12345";
// 	ft_strlcat(dest1, src1, sizeof(dest1));
// 	printf("Src: %s\nSrc1:%s\n", src, src1);
// }