/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:11:29 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:14:01 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("Limited comparison: %d\n", ft_strncmp("Sad", "Happy", 3));
	printf("Limited comparison: %d\n", ft_strncmp("Mind", "Mindset", 2));
	return (0);
}*/

//Reproduce the behavior of the function strncmp (man strncmp).
