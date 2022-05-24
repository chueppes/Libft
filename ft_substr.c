/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:29:57 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/24 13:49:08 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	j = start;
	slen = ft_strlen(s);
	dlen = slen - len;
	if (start > len)
		return (ft_strdup(""));
	if (dlen >= len)
		str = (char *)malloc(len + 1);
	else
		str = (char *)malloc(dlen + 1);
	ft_strlcpy(str, &s[j], len + 1);
	return (str);
}
