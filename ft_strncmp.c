/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:06:21 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/13 13:45:43 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i++ <= n)
	{
		if (s1[i] != s2[i])
			return ((*(unsigned char *)s1) - (*(unsigned char *)s2));
	}
	return ((int *)s1 - (int *) s2);
}
