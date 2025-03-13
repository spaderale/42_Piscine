/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 23:08:09 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:03:39 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int     main(void)
{
        char str1[15] = "PISciNE 42";
        char str2[15] = "EXPLORE";
        char str3[15] = "CoDING";

        printf("String1: %s\n", str1);
        printf("String2: %s\n", str2);
        printf("String3: %s\n", str3);

        printf("String1: %s\n", ft_strlowcase(str1));
        printf("String2: %s\n", ft_strlowcase(str2));
        printf("String3: %s\n", ft_strlowcase(str3));

        return(0);
}*/

//Create a function that transforms every letter to lowercase.
