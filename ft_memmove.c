/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:46:04 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/12 14:02:11 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*tdest;
	const char	*tsrc;
	int			i;
	size_t		j;

	tsrc = (char *)src;
	tdest = (char *)dest;
	i = len - 1;
	j = 0;
	if ((tdest > tsrc) && ((tdest - tsrc) < (int)len))
	{
		while (i-- >= 0)
			tdest[i] = tsrc[i];
		return (dest);
	}
	if ((tsrc > tdest) && ((tsrc - tdest) < (int)len))
	{
		while (j++ < len)
			tdest[j] = tsrc[j];
		return (dest);
	}
	ft_memcpy(dest, src, len);
	return (dest);
}
