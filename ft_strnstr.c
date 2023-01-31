/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:45:03 by mumujic           #+#    #+#             */
/*   Updated: 2022/10/25 15:55:14 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2_l;

	s2_l = ft_strlen(s2);
	if (s2[0] == '\0')
		return ((char *)s1);
	while (*s1 && n >= s2_l)
	{
		if (!(ft_memcmp(s1, s2, s2_l)))
			return ((char *)s1);
		s1++;
		n--;
	}
	return (NULL);
}
