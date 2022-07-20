/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LibftMain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:10:56 by lolemmen          #+#    #+#             */
/*   Updated: 2022/07/20 18:17:56 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"
#include "stdio.h"

int main(void)
{
    printf("ft_atoi : \n");
	printf("NULL : %d\n", ft_atoi(""));
	printf("NULL : %d\n", atoi(""));
	printf("Negative : %d\n", ft_atoi("-1234"));
	printf("Negative : %d\n", atoi("-1234"));
	printf("Positive : %d\n", ft_atoi("1234"));
	printf("Positive : %d\n", atoi("1234"));
	printf("Max Int : %d\n", ft_atoi("2147483647"));
	printf("Max Int : %d\n", atoi("2147483647"));
	printf("Min Int : %d\n", ft_atoi("-2147483648"));
	printf("Min Int : %d\n", atoi("-2147483648"));
	printf("\n\n");
    printf("ft_bzero : \n");
    printf("ft_calloc : \n");
    printf("ft_isalnum : \n");
    printf("ft_isalpha : \n");
    printf("ft_isascii : \n");
    printf("ft_isdigit : \n");
    printf("ft_isprint : \n");
    printf("ft_itoa : \n");
    printf("ft_memchr : \n");
    printf("ft_memcmp : \n");
    printf("ft_memcpy : \n");
    printf("ft_memmove : \n");
    printf("ft_memset : \n");
    printf("ft_putchar_fd : \n");
    printf("ft_putendl_fd : \n");
    printf("ft_putnbr_fd : \n");
    printf("ft_putstr_fd : \n");
    printf("ft_split : \n");
    printf("ft_strchr : \n");
    printf("ft_strdup : \n");
    printf("ft_striteri : \n");
    printf("ft_strjoin : \n");
    printf("ft_strlcat : \n");
    printf("ft_strlcpy : \n");
    printf("ft_strlen : \n");
    printf("ft_strmapi : \n");
    printf("ft_strncmp : \n");
    printf("ft_strnstr : \n");
    printf("ft_strrchr : \n");
    printf("ft_strtrim : \n");
    printf("ft_substr : \n");
    printf("ft_tolower : \n");
    printf("ft_toupper : \n");

}
