/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:29:57 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/25 13:54:14 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(s);
	dlen = slen - start;
	if (!s)
		return (NULL);
	if (start > slen)
		return (ft_strdup(""));
	if (dlen >= len)
		str = malloc(len + 1);
	else
		str = malloc(dlen + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s[start], (len + 1));
	return (str);
}
