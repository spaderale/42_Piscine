/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:26:26 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 17:44:31 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
	printf("Retorno: %d\n", ft_str_is_alpha(argv[1]));
	return(0);

}*/

//Create a function that returns 1 if the string given as a parameter contains only
//alphabetical characters, and 0 if it contains any other character.
//It should return 1 if str is empty.
