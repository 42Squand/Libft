/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42Lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:07:12 by mumujic           #+#    #+#             */
/*   Updated: 2022/11/06 14:07:12 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **tab_all, int i)
{
	while (i--)
		free(tab_all[i]);
	free(tab_all);
	return (NULL);
}

static int	ft_count_tab(const char *str, char c)
{
	int	i;
	int	numb;

	i = 0;
	numb = 0;
	if (str[i] == c || str[i] == '\0')
		numb--;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			numb++;
		i++;
	}
	return (numb + 1);
}

static int	ft_len_tab(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		tab_len;
	char	**tab_all;

	i = 0;
	if (!s)
		return (NULL);
	tab_len = ft_count_tab(s, c);
	tab_all = malloc((tab_len + 1) * sizeof(char *));
	if (!tab_all)
		return (NULL);
	while (i < tab_len)
	{
		while (*s == c && *s)
			s++;
		tab_all[i] = ft_substr(s, 0, ft_len_tab(s, c));
		if (tab_all[i] == NULL)
			return (ft_free(tab_all, i));
		s += ft_len_tab(s, c);
		i++;
	}
	tab_all[i] = '\0';
	return (tab_all);
}
