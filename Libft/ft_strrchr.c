/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:06:43 by mumujic           #+#    #+#             */
/*   Updated: 2022/10/25 14:20:36 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = 0;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((s[i] == (char)c))
		{
			ptr = (char *)(s + i);
			return (ptr);
		}
		i--;
	}
	return (NULL);
}
