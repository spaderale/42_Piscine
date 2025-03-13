/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:58:29 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:54:46 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(int argc, char *argv[])
{
	int	number;
	int	result;
	int	power;

	if (argc == 3)
	{
		number = atoi(arrgv[1]);
		power = atoi(argv[2]);
		result = ft_recursive_power(number, power);
		printf("The power of %d raised to %d is: %d\n", number, power, result);
	}
	return (0);
}*/

//Create a recursive function that returns the value of a power applied to a number.
