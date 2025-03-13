/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 22:10:22 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:33:32 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (to_find[c] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		c = 0;
		while (to_find[c] != '\0' && to_find[c] == str[i + c])
		{
			c++;
		}
		if (to_find[c] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

/*int	main(int argc, char *argv[])
{
	char *result = ft_strstr(argv[1], argv[2]);
	if (argc > 2)
	{
		 printf("Result: %s\n", result);
	}
	else
	{
		printf("Invalid parameters\n");
	}
	return(0);
}*/

//Reproduce the behavior of the function strstr (man strstr).
