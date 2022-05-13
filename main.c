/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:24:50 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/13 13:33:37 by acalvo4          ###   ########.fr       */
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

//variáveis strlcat
char teste7[100] = "segundo";
char teste71[100] = "primeiro";
char teste8[100] = "segundo";
char teste81[100] = "primeiro";

//variáveis toupper/tolower
unsigned int c1;
c1 = 'a';
unsigned int c2;
c2 = 'a';

//variáveis strchr
const char string[]="macarrao";
unsigned int c;
c = 'a';
const char string1[]="macarrao";
unsigned int d;
d = 'a';


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
//ft_strlcat
printf("\n ft_strlcat\n");
printf(" Função original:\n");
printf("String %s copiada em %s, tamanho total: %zu\n", teste7, teste71,strlcat(teste71, teste7, 20));
printf(" Minha função:\n");
printf("String %s copiada em %s, tamanho total: %zu\n", teste8, teste81,ft_strlcat(teste81, teste8, 20));
//ft_toupper
printf("\nft_toupper\n");
printf("Resultado esperado:\n");
printf("maiúsculo: %c\n", toupper(c1));
printf("retorno da minha função:\n");
printf("maiúsculo: %c\n", ft_toupper(c2));
//ft_tolower
printf("\nft_tolower\n");
printf("Resultado esperado:\n");
printf("minúsculo: %c\n", tolower(c1));
printf("retorno da minha função:\n");
printf("minúsculo: %c\n", ft_tolower(c2));
//ft_strchr
printf("\nft_strchr\n");
printf("Função original:%s\n", strchr(string, c));
printf("Minha função:%s\n", ft_strchr(string1, d));
//ft_strrchr
printf("\nft_strchr\n");
printf("Função original:%s\n", strrchr(string, c));
printf("Minha função:%s\n", ft_strrchr(string1, d));
//ft_strncmp
printf("\nft_strncmp\n");
printf("Função original em strings diferentes:%d\n", strncmp(string, teste7, '3'));
printf("Função original em strings iguais:%d\n", strncmp(string, string1, '3'));
printf("Minha função com strings diferentes:%d\n", ft_strncmp(string1, teste7, '3'));
printf("Minha função com strings iguais:%d\n", ft_strncmp(string1, string1, '3'));
return (0);
}

