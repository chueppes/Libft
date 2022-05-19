/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 09:13:04 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/19 15:23:50 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	slen;
	char	*s2;
	int		i;

	i = 0;
	slen = ft_strlen(s1);
	s2 = malloc(slen * sizeof(char));
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	return ((char *)s2);
}
