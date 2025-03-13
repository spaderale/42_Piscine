/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 18:02:39 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/04 18:37:26 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (c < n && src[c] != '\0')
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char frase1[50] = "Janela";
	char frase2[50] = "voadora";
	char *resultado = ft_strncat(frase1, frase2, 2);
	printf("Concatenado: %s\n", resultado);
	return (0);
}*/
