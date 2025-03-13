/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:06:38 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 16:14:42 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, &"N", 1);
	}
	else
	{
		write(1, &"P", 1);
	}
}

/*int	main(void)
{
	ft_is_negative (0);
	return (0);
}*/

//Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered
//as a parameter. If n is negative, display ’N’. If n is positive or null, display ’P’.
