/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:10:44 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/12 15:24:23 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = dstsize - 1;
	while (i-- > 0){
		dst[i] = src[i];
	}
	dst[dstsize - 1] = '\0';
	return (ft_strlen(src));
}
