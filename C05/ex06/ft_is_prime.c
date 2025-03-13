/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 23:35:03 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:58:37 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*int	main()
{
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(50));
	printf("%d\n", ft_is_prime(101));
	printf("%d\n", ft_is_prime(130));
}*/

//Create a function that returns 1 if the number given as a parameter is a prime 
//number, and 0 if it isn’t.
