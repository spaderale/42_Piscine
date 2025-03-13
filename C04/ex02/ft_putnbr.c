/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:35:00 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:40:25 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb = -nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_write((nb % 10) + '0');
	}
	else
	{
		ft_write(nb + '0');
	}
}

/*int	main()
{
	int	number;
	number = 2147483647;
	ft_putnbr(number);
	return(0);
}*/

//Create a function that displays the number entered as a parameter. The function
//has to be able to display all possible values within an int type variable.
