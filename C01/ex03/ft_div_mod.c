/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:57:00 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 16:22:46 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 2;
	printf("valor a: %d \n", a);
	printf("valor b: %d \n", b);
	ft_div_mod(a, b, &div, &mod);
	printf("divisao: %d \n", div);
	printf("modulo: %d \n", mod);
	return (0);
}*/

//This function divides parameters a by b and stores the result in the int pointed by
//div. It also stores the remainder of the division of a by b in the int pointed by mod.
