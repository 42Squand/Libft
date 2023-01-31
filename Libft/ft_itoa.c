/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42Lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 21:48:35 by mumujic           #+#    #+#             */
/*   Updated: 2022/11/06 21:48:35 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

int	ft_check_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = 0;
	if (n == 0)
		*str = '0';
	if (n < 0)
		*str = '-';
	len--;
	while (len >= 0 && n != 0)
	{
		*(str + len) = ft_check_value(n % 10) + '0';
		len--;
		n = n / 10;
	}
	return (str);
}
