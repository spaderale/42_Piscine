/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:21:35 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 16:21:43 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 20;
	printf("valor x: %d\n", x);
	printf("valor y: %d\n", y);
	ft_swap(&x, &y);
	printf("valor x: %d\n", x);
	printf("valor y: %d\n", y);
	return (0);
}*/

//Create a function that swaps the value of two integers whose addresses are entered
//as parameters.
