/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:16:50 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:37:50 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main()
{
	char str[20] = "Alexandre";
	int result;

	result = ft_strlen(str);
	printf("%s\n", str);
	printf("%d\n", result);
	return (0);
}*/

//Create a function that counts and returns the number of characters in a string.
