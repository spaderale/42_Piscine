/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:28:57 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 16:24:35 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 24;
	y = 42;
	printf("valor x: %d\n", x);
	printf("valor y: %d\n", y);
	ft_ultimate_div_mod(&x, &y);
	printf("valor divisao: %d\n", x);
	printf("resto de divisao: %d\n", y);
	return (0);
}*/

//This function divides parameters a by b. The result of this division is stored in the
//int pointed by a. The remainder of the division is stored in the int pointed by b.
