/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:29:23 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:53:16 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*int	main(int argc, char *argv[])
{
	int	result;
	int	number;
	int	power;

	if (argc == 3)
	{
		number = atoi(argv[1]);
		power = atoi(argv[2]);
		result = ft_iterative_power(number, power);
		printf("The power of %d raised to %d is: %d\n", number, power, result);
	}
	else
		return (0);
}*/

//Create an iterated function that returns the value of a power applied to a number
