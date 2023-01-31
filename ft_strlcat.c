/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:44:56 by mumujic           #+#    #+#             */
/*   Updated: 2022/10/25 15:52:27 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_l;
	size_t	src_l;

	dest_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	j = dest_l;
	i = 0;
	if (dest_l < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && dest_l + i < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_l >= dstsize)
		dest_l = dstsize;
	return (dest_l + src_l);
}
