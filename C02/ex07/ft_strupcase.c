/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:45:09 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:00:32 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
        char str1[10] = "Happy";
        char str2[10] = "cod ing";
	char str3[10] = "piscine";

        printf("String1: %s\n", str1);
        printf("String2: %s\n", str2);
	printf("String3: %s\n", str3);

        printf("String1: %s\n", ft_strupcase(str1));
        printf("String2: %s\n", ft_strupcase(str2));
        printf("String3: %s\n", ft_strupcase(str3));

	return(0);
}*/

//Create a function that transforms every letter to uppercase.
