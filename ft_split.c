/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:55:16 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/27 15:10:20 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int ft_wordlen(char const *s, char c);
static int	ft_wordcount(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char **ret;
	int	i;
	int	size;
	int aux;
	int x;

	x = 0;
	aux = ft_wordcount(s, c);
	i = 0;
	if (!s)
		return(0);
	ret = ft_calloc(aux, sizeof(char **));
	if (!ret)
		return(NULL);
	while ((x < aux) && (s[i] != '\0'))
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0'){
			size = ft_wordlen(s, c);
			ret[x] = ft_substr(s, i, size);
			x++;
			s = ft_strchr(s + i, c);
			i = 0;
		}
	}
	return(ret);
}

static int ft_wordlen(char const *s, char c)
{
	int count;
	int	 i;

	i = 0;
	count = 0;
	while (s[i] != c){
		count++;
		i++;
	}
	return (count);
}

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while(*s != '\0')
	{
		if(*s != c && i == 0)
		{
			i = 1;
			j++;
		}
		else if (*s == c) {
			i = 0;
		}
		s++;
	}
	return (j);
}

