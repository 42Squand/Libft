/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:26:03 by mumujic           #+#    #+#             */
/*   Updated: 2022/11/04 14:48:33 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		suf;
	size_t		pref;
	size_t		comb;
	char		*str;

	suf = ft_strlen(s2);
	pref = ft_strlen(s1);
	comb = pref + suf;
	str = malloc((pref + suf + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (s1 && s2)
	{
		ft_memcpy(str, s1, pref);
		ft_memcpy(str + pref, s2, suf);
	}
	str[comb] = '\0';
	return ((char *)(str));
}
