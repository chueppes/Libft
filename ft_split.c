/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:55:16 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/29 20:44:50 by anna_calvo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_wordlen(char const *s, char c);
static int	ft_wordcount(char const *s, char c);
static void	ft_free(int i, char **ret);

char	**ft_split(char const *s, char c)
{
	int		i;
	int		x;
	int		aux;
	int		size;
	char		**ret;

	x = 0;
	i = 0;
	size = 0;
	aux = ft_wordcount(s, c);
	ret = ft_calloc(aux + 1, sizeof(char **));
	if (!ret)
		return (NULL);
	while ((x < aux) && (s[i] != '\0'))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			size = ft_wordlen(s + i, c);
			ret[x] = ft_substr(s, i, size);
			if (!ret[x])
				ft_free(i, ret);
			x++;
			s = ft_strchr(s + i, c);
			i = 0;
		}
	}
	return (ret);
}

static void	ft_free(int i, char **ret)
{
	while (i > 0)
		free(ret[i--]);
	free(ret);
	return ((void) NULL);
}

static int	ft_wordlen(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != c && s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s != '\0')
	{
		if (*s != c && i == 0)
		{
			i = 1;
			j++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (j);
}
