/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:24:50 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/19 15:12:24 by acalvo4          ###   ########.fr       */
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

//variaveis ft_memchr
const char str[] = "http://www.tutorialspoint.com";
const char ch = '.';

//variaveis ft_memcmp
char buffer1[] = "DWgaOtP12df0";
char buffer2[] = "aaaaaa";
char buffer3[] = "aaaaaa";

//variaveis strnstr
const char haystack[]="nhoque é macarrão de batata";
const char needle[]="";
printf("\n---- strnstr ----\n");
	// atoi

//variaveis atoi
const char atoe[]="12345";

//variaveis calloc
char *cal=calloc(8, sizeof(char));
char *cal1=ft_calloc(8, sizeof(char));

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
printf("\nft_strrchr\n");
printf("Função original:%s\n", strrchr(string, c));
printf("Minha função:%s\n", ft_strrchr(string1, d));
//ft_strncmp
printf("\nft_strncmp\n");
printf("Função original em strings diferentes:%d\n", strncmp(string, teste7, '3'));
printf("Função original em strings iguais:%d\n", strncmp(string, string1, '3'));
printf("Minha função com strings diferentes:%d\n", ft_strncmp(string1, teste7, '3'));
printf("Minha função com strings iguais:%d\n", ft_strncmp(string, string1, '3'));
//ft_memchr
printf("\nft_memchr\n");
printf("String after |%c| is - |%s|\n", ch, (char *) memchr(str, ch, strlen(str)));
printf("String after |%c| is - |%s|\n", ch, (char *)ft_memchr(str, ch, strlen(str)));
//ft_memcmp
printf("\nft_memcmp\n");
printf("Função original em strings diferentes:%d\n", memcmp(buffer1, buffer2, 3));
printf("Função original em strings iguais:%d\n", memcmp(buffer2, buffer3, 3));
printf("Minha função com strings diferentes:%d\n", ft_memcmp(buffer1, buffer2, 3));
printf("Minha função com strings iguais:%d\n", ft_memcmp(buffer2, buffer3, 3));
//ft_strnstr
printf("\nft_strnstr\n");
printf("Função original:%s\n", strnstr(haystack, needle, 25));
printf("Minha função:%s\n", ft_strnstr(haystack, needle, 25));
printf("\n---- strnstr ----\n");
	printf("hay = 'Hello 42', need = '', len = 4 : %s, real : %s\n", ft_strnstr("Hello 42", "", 4), strnstr("Hello 42", "", 4));
	printf("hay = 'Hello 42', need = 'lo', len = 5 : %s, real : %s\n", ft_strnstr("Hello 42", "lo", 5), strnstr("Hello 42", "lo", 5));
	printf("hay = 'Hello 42', need = 'lo', len = 100 : %s, real : %s\n", ft_strnstr("Hello 42", "lo", 100), strnstr("Hello 42", "lo", 100));
	printf("hay = 'Hello 42', need = 'uiok', len = 100 : %s, real : %s\n", ft_strnstr("Hello 42", "uiok", 100), strnstr("Hello 42", "uiok", 100));
	// atoi
//ft_atoi
printf("\nft_atoi\n");
printf("Função original:%d\n", atoi(atoe));
printf("Minha função:%d\n", ft_atoi(atoe));
//ft_calloc
printf("\nft_calloc\n");
printf("Função original:%s\n", (char *)cal);
printf("Minha função:%s\n", (char *)cal1);
//ft_strdup
printf("\nft_strdup\n");
printf("Função original:%s\n", strdup(string));
printf("Minha função:%s\n", ft_strdup(string));
//ft_atoi
printf("\n ft_atoi\n");
  printf("a int max 2147483647 : %d\n", atoi("2147483647"));
    printf("f int max 2147483647 : %d\n", ft_atoi("2147483647"));
    printf("a int min -2147483648 : %d\n", atoi("-2147483648"));
    printf("f int min -2147483648 : %d\n", ft_atoi("-2147483648"));
    printf("a int over 9999999999 : %d\n", atoi("9999999999"));
    printf("f int over 9999999999 : %d\n", ft_atoi("9999999999"));
    printf("a int under -9999999999 : %d\n", atoi("-9999999999"));
    printf("f int under -9999999999 : %d\n", ft_atoi("-9999999999"));
    printf("a long long plus 92233720368547758 : %d\n", atoi("92233720368547758"));
    printf("f long long plus 92233720368547758 : %d\n", ft_atoi("92233720368547758"));
    printf("a long long minus -92233720368547758 : %d\n", atoi("-92233720368547758"));
    printf("f long long minus -92233720368547758 : %d\n", ft_atoi("-92233720368547758"));
    printf("a long long max 9223372036854775807 : %d\n", atoi("9223372036854775807"));
    printf("f long long max 9223372036854775807 : %d\n", ft_atoi("9223372036854775807"));
    printf("a long long min -9223372036854775808 : %d\n", atoi("–9223372036854775808"));
    printf("f long long min -9223372036854775808 : %d\n", ft_atoi("–9223372036854775808"));
    printf("a long long max / 10 922337203685477580 : %d\n", atoi("922337203685477580"));
    printf("f long long max / 10 922337203685477580 : %d\n", ft_atoi("922337203685477580"));
    printf("a long long max / 10 + 1 922337203685477581 : %d\n", atoi("922337203685477581"));
    printf("f long long max / 10 + 1 922337203685477581 : %d\n", ft_atoi("922337203685477581"));
    printf("a long long max / 10 + 4 922337203685477584 : %d\n", atoi("922337203685477584"));
    printf("f long long max / 10 + 4 922337203685477584 : %d\n", ft_atoi("922337203685477584"));
    printf("a long long max / 10 + 5 922337203685477585 : %d\n", atoi("922337203685477585"));
    printf("f long long max / 10 + 5 922337203685477585 : %d\n", ft_atoi("922337203685477585"));
    printf("a long long max - 1 922337203685477586 : %d\n", atoi("922337203685477586"));
    printf("f long long max - 1 922337203685477586 : %d\n", ft_atoi("922337203685477586"));
    printf("a long long max + 1 9223372036854775808 : %d\n", atoi("9223372036854775808"));
    printf("f long long max + 1 9223372036854775808 : %d\n", ft_atoi("9223372036854775808"));
    printf("a long long max + 2 9223372036854775809 : %d\n", atoi("9223372036854775809"));
    printf("f long long max + 2 9223372036854775809 : %d\n", ft_atoi("9223372036854775809"));
    printf("a long long max + 10 9223372036854775817 : %d\n", atoi("9223372036854775817"));
    printf("f long long max + 10 9223372036854775817 : %d\n", ft_atoi("9223372036854775817"));
    printf("a long long min - 1 –9223372036854775809 : %d\n", atoi("–9223372036854775809"));
    printf("f long long min - 1 –9223372036854775809 : %d\n", ft_atoi("–9223372036854775809"));
    printf("a long long min - 2 –9223372036854775810 : %d\n", atoi("–9223372036854775810"));
    printf("f long long min - 2 –9223372036854775810 : %d\n", ft_atoi("–9223372036854775810"));
    printf("a long long min - 10 –9223372036854775818 : %d\n", atoi("–9223372036854775818"));
    printf("f long long min - 10 –9223372036854775818 : %d\n", ft_atoi("–9223372036854775818"));
    printf("a long long over 9223379876854775807 : %d\n", atoi("9223379876854775807"));
    printf("f long long over 9223379876854775807 : %d\n", ft_atoi("9223379876854775807"));
    printf("a long long under -9223379876854775807 : %d\n", atoi("-9223379876854775807"));
    printf("f long long under -9223379876854775807 : %d\n", ft_atoi("-9223379876854775807"));
    printf("a long long half 4611686018427387903 : %d\n", atoi("4611686018427387903"));
    printf("f long long half 4611686018427387903 : %d\n", ft_atoi("4611686018427387903"));
    printf("a zero 0 : %d\n", atoi("0"));
    printf("f zero 0 : %d\n", ft_atoi("0"));
    printf("a empty  : %d\n", atoi(""));
    printf("f empty  : %d\n", ft_atoi(""));
return (0);
}

