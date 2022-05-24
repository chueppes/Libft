/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:21:35 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/24 15:18:03 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	const char	*str;
	size_t size;

	i = 0;
	start = 0;
	end = 0;
	while (set[i] != '\0')
	{
		if(ft_strncmp(s + start, set + i, 1) == 0)
		{
			start++;
			i = 0;
		}
		i++;
	}
	i = 0;
	end = ft_strlen(s1);
	while (set[i] != '\0')
	{
		if (ft_strncmp(s + end, set + i, 1) == 0)
			{
				end--;
				i = 0;
			}
			i++;
	}
	i = ft_strlen(s1) - end;
	size = ft_strlen(s1) - i - j;
	str = (char *)malloc(size);
	while (size >= 0)
	{

}

