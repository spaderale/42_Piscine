/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:08:34 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 17:48:25 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(int argc, char *argv[])
{
	printf("A frase é: %s\nO retorno é: %d\n", argv[1], ft_str_is_lowercase(argv[1]));
	return(0);
}*/

//Create a function that returns 1 if the string given as a parameter contains only
//lowercase alphabetical characters, and 0 if it contains any other character.
// It should return 1 if str is empty.
