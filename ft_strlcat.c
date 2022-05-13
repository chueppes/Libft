/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:49:53 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/13 10:08:32 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lend;

	i = 0;
	lend = ft_strlen(dst);
	while (dstsize-- > 0)
	{
		dst[lend] = src[i];
		i++;
		lend++;
	}
return (ft_strlen(dst));
}
