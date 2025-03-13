/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:50:17 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:16:06 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[c + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	str1[20] = "42";
	char	str2[20] = "Piscine";

	printf("String1: %s\n", string1);
	printf("String2: %s\n", string2);
	ft_strcat(string1, string2);
	printf("Concatenated: %s\n", str1);
	return (0);
}*/

//Reproduce the behavior of the function strcat (man strcat).
