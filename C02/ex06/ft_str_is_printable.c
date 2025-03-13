/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:04:19 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 17:55:51 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 31 || str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char str1[15] = "42 Piscine";
        char str2[15] = "piscine\n";
	char str3[15] = "piscine\x7F";

        printf("String1: %s\n", str1);
        printf("String2: %s\n", str2);
	printf("String3: %s\n", str3);

        printf("String1: %d\n", ft_str_is_printable(str1));
        printf("String2: %d\n", ft_str_is_printable(str2));
        printf("String3: %d\n", ft_str_is_printable(str3));

       	return(0);
}*/
