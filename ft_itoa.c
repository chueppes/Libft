/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:53:00 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/29 15:20:03 by anna_calvo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size( long n);

char	*ft_itoa(int n)
{
	char	*str;
	int		neg;
	int		rest;
	int		s;
	long	nlong;

	nlong = n;
	neg = 0;
	s = size(n);
	if (nlong == 0)
	{
		str = ft_strdup("0");
		return (str);
	}
	if (nlong < 0)
	{
		str = ft_calloc((s + 2), sizeof(char));
		if (!str)
			return (NULL);
		s++;
		neg = 1;
		nlong *= -1;
	}
	else
	{
		str = ft_calloc((s + 1), sizeof(char));
		if (!str)
			return (NULL);
	}
	if (nlong != 0)
	{
		while (s--)
		{
			if ((neg == 1) && (s == 0))
			{
				str[0] = '-';
				s = size(n);
				str[s + 1] = '\0';
				return (str);
			}
			rest = nlong % 10;
			str[s] = rest + '0';
			nlong = nlong / 10;
		}
	}
			s = size(n);
	return (str);
}

static size_t	size(long n)
{
	size_t	count;

	count = 0;
	if (n >= 0 && n <= 9)
		return (1);
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}
