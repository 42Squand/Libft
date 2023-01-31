/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:55:34 by mumujic           #+#    #+#             */
/*   Updated: 2022/10/25 13:44:37 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*swap;

	swap = s;
	while (n > 0)
	{
		n--;
		*swap++ = c;
	}
	return (s);
}
