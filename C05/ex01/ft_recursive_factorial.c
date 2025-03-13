/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:49:44 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:51:25 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(int argc, char *argv[])
{
	int	result;
	int	number;

	if (argc > 1)
	{
		number = atoi(argv[1]);
		result = ft_recursive_factorial(number);
		printf("The factorial of the number %d is: %d\n", number, result);
	}
	return (0);
}*/

//Create a recursive function that returns the factorial of the number given as a parameter.
