/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 23:57:03 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:11:07 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int	main(void)
{
	char str1[5] = "Card";
	char str2[5] = "Car";

	printf("Compare: %d\n", ft_strcmp(str1, str2));
	return (0);
}*/

//Reproduce the behavior of the function strcmp (man strcmp).
