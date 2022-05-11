/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:24:50 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/11 15:17:08 by acalvo4          ###   ########.fr       */
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
//variáveis memcpy
char teste[100] = "Geeksfor";
char teste2[100] = "Geeksfor";

//...............................................................................
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
printf("Função original: %s \n", memset(mem, 'v', 3));
printf("Minha função: %s \n", ft_memset(mam, 'v', 3));
//ft_bzero
printf("\n ft_bzero: \n");
printf("Antes da função original: %s \n",(char *)mem);
bzero(mem, 3);
printf("Depois da função original: %s \n",(char *)mem);
printf("Antes da minha função: %s \n",(char *)mam);
ft_bzero(mam, 3);
printf("Depois da minha função: %s \n",(char *)mam);
//ft_memcpy
printf("\n ft_memcpy \n");
printf("Função original: %s \n",memcpy(teste + 5, teste, strlen(teste) + 1));
printf("Minha Função: %s \n",ft_memcpy(teste2 + 5, teste2, strlen(teste2) + 1));

return (0);
}
