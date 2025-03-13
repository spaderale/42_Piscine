/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:09:42 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 16:31:42 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
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

/*int	main(void)
{
	char	string[13] = "Hello world!";
	int	len;
	len = ft_strlen(string);
	printf("The length of the string is: %d\n", len);
	return (0);
}*/

//Create a function that counts and returns the number of characters in a string
