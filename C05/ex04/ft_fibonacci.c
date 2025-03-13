/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 20:13:09 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:56:09 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int	main()
{
	int nb = 20;
	printf("Fibonacci of %d is: %d\n", nb, ft_fibonacci(nb));
	return (0);
}*/

//Create a function ft_fibonacci that returns the n-th element of the Fibonacci
//sequence, the first element being at the 0 index. We’ll consider that the Fibonacci
//sequence starts like this: 0, 1, 1, 2.
