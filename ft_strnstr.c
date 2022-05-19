/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:49:28 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/19 15:57:21 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;

	i = 0;
	nlen = ft_strlen(needle);
	if (needle[0] == '\0' || needle == NULL)
		return ((char *)haystack);
	while ((i < len) && (haystack[i] != '\0'))
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(haystack + i, needle, i - nlen)  == 0)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
