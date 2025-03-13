/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:45:53 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 17:52:13 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char str1[10] = "HAPPy";
        char str2[10] = "C0DING";
	char str3[10] = "CODING";

        printf("frase 1: %s\n", str1);
        printf("frase 2: %s\n", str2);
	printf("frase 3: %s\n", str3);
        printf("frase 1: %d\n", ft_str_is_uppercase(str1));
        printf("frase 2: %d\n", ft_str_is_uppercase(str2));
        printf("frase 3: %d\n", ft_str_is_uppercase(str3));

	return(0);
}*/

//Create a function that returns 1 if the string given as a parameter contains only
//uppercase alphabetical characters, and 0 if it contains any other character.
//It should return 1 if str is empty
