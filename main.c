/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:24:50 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/10 11:02:31 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>

int main (){
	
const char *s[]="
	
printf("\n ft_isalpha: \n");
printf("Função original: %d \n", isalpha('o'));
printf("Minha função: %d \n", ft_isalpha('o'));
printf("\n ft_isdigit: \n");
printf("Função original: %d \n", isdigit('o'));
printf("Minha função: %d \n", ft_isdigit('o'));
printf("\n ft_isalnum: \n");
printf("Função original: %d \n", isalnum('o'));
printf("Minha função: %d \n", ft_isalnum('o'));
printf("\n ft_isascii: \n");
printf("Função original: %d \n", isascii('~'));
printf("Minha função: %d \n", ft_isascii('~'));
printf("\n ft_isprint: \n");
printf("Função original: %d \n", isprint('	'));
printf("Minha função: %d \n", ft_isprint('	'));
printf("\n ft_strlen: \n");
printf("Função original: %d \n", strlen(s));
printf("Minha função: %d \n", ft_strlen(s));
return (0);
}
