/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:06:40 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:57:30 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*int	main(int argc, char *argv[])
{
	int	number;

	if (argc == 2)
	{
		number = atoi(argv[1]);
		printf("The square root of %d is: %d\n", number, ft_sqrt(number));
	}
	return (0);
}*/

//Create a function that returns the square root of a number (if it exists), or 0 if the
//square root is an irrational number.
