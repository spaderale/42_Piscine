/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:12:44 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 17:46:44 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main(int argc, char *argv[])
{
	printf("A frase é: %s\n O retorno é: %d\n", argv[1], ft_str_is_numeric(argv[1]));
	return(0);
}*/

//Create a function that returns 1 if the string given as a parameter contains only
//digits, and 0 if it contains any other character.
//It should return 1 if str is empty.
