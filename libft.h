/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:56:42 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/10 14:36:01 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
#define _LIBFT_H
#include <unistd.h>
#include <stdlib.h>

int ft_isalpha (int i);
int ft_isdigit(int i);
int ft_isalnum(int i);
int ft_isascii(int i);
int ft_isprint(int i);
size_t ft_strlen(const char *s);
void *ft_memset(void *s, int c, size_t n);
#endif
