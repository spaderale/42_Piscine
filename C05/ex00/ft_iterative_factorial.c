/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:55:43 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:48:36 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fat;

	if (nb < 0)
		return (0);
	fat = 1;
	while (nb > 1)
	{
		fat = fat * nb;
		nb = nb - 1;
	}
	return (fat);
}

/*int	main(void)
{
	int	n;
	int	result;

	n = 5;
	printf("The value of n is: %d\n", n);
	result = ft_iterative_factorial(n);
	printf("calculated factorial: %d\n", result);
	return (0);
}*/

//Create an iterated function that returns a number. This number is the result of a
//factorial operation based on the number given as a parameter.
