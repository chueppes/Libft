/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:24:50 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/12 15:30:10 by acalvo4          ###   ########.fr       */
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
//variáveis memmove
char teste3[100] = "Geeksfor";
char teste4[100] = "Geeksfor";
//variáveis strlcpy
char teste5[] = "Frase qualquer";
char teste51[] = "xxxxxxx";
char teste6[] = "Frase qualquer";
char teste61[] = "xxxxxxx";

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
printf("Antes da função original: %s\n",(char *)mem);
bzero(mem, 3);
printf("Depois da função original: %s \n",(char *)mem);
printf("Antes da minha função: %s\n",(char *)mam);
ft_bzero(mam, 3);
printf("Depois da minha função: %s \n",(char *)mam);
//ft_memcpy
printf("\n ft_memcpy \n");
printf("Função original: %s \n",memcpy(teste + 5, teste, strlen(teste) + 1));
printf("Minha Função: %s \n",ft_memcpy(teste2 + 5, teste2, strlen(teste2) + 1));
//ft_memmove
printf("\n ft_memmove \n");
printf("Função original: %s \n",memmove(teste3 + 5, teste3, strlen(teste3) + 1));
printf("Minha Função: %s \n",ft_memmove(teste4 + 5, teste4, strlen(teste4) + 1));
//ft_strlcpy
printf("\n ft_strlcpy\n");
printf(" Função original:\n");
printf("String %s copiada em %s, ate o índice %zu\n", teste5, teste51, strlcpy(teste51, teste5, 5));
printf(" Minha função:\n");
printf("String %s copiada em %s, ate o índice %zu\n", teste6, teste61, ft_strlcpy(teste61, teste6, 5));

return (0);
}
