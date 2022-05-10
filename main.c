/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:24:50 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/10 14:58:55 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>

int main ()
{
//variáveis strlen
const char *s[100];
*s = "lalalala";

//variáveis memset
void	*mem[100];
*mem = "laranja";
void	*mam[100];
*mam = "laranja";
int c;
size_t n;

c = 4;
n = 3;

//ft_isalpha
printf("\n ft_isalpha: \n");
printf("Função original: %d \n", isalpha('o'));
printf("Minha função: %d \n", ft_isalpha('o'));
//ft_isdigit
printf("\n ft_isdigit: \n");
printf("Função original: %d \n", isdigit('o'));
printf("Minha função: %d \n", ft_isdigit('o'));
//ft_isalnum
printf("\n ft_isalnum: \n");
printf("Função original: %d \n", isalnum('o'));
printf("Minha função: %d \n", ft_isalnum('o'));
//ft_isascii
printf("\n ft_isascii: \n");
printf("Função original: %d \n", isascii('~'));
printf("Minha função: %d \n", ft_isascii('~'));
//ft_isprint
printf("\n ft_isprint: \n");
printf("Função original: %d \n", isprint('	'));
printf("Minha função: %d \n", ft_isprint('	'));
//ft_strlen
printf("\n ft_strlen: \n");
printf("Função original: %zu \n", strlen(*s));
printf("Minha função: %zu\n", ft_strlen(*s));
//ft_memset
printf("\n ft_memset: \n");
printf("Função original: %d \n", *memset(*mem, c, n));
printf("string após a função original: %d", mem);
printf("Minha função: %d \n", *ft_memset(*mam, c, n));
printf("string após a minha função: %d", mam);

return (0);
}
