/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:25:00 by mumujic           #+#    #+#             */
/*   Updated: 2022/11/04 14:39:47 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*s;

	i = 0;
	if (!str)
		return (NULL);
	if (start > (unsigned int) ft_strlen(str))
		return (ft_strdup(""));
	if (start + len > (size_t) ft_strlen(str))
		len = ft_strlen((str + start));
	s = malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (i < len && start < (size_t) ft_strlen(str))
	{
		s[i] = str[start++];
		i++;
	}
	s[i] = '\0';
	return (s);
}
