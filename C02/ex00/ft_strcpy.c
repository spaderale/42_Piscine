/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:45:29 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 17:38:29 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


/*int	main(int argc, char *argv[])
{
	if(argc == 2)
	{
		char string[200];
		char *result = ft_strcpy(string, argv[1]);
		printf("Copia: %s\n", result);
	}
	return(0);
}*/

//Reproduce the behavior of the function strcpy (man strcpy).
