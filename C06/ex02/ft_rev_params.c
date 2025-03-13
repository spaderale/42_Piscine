/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:51:16 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 19:02:16 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	c;

	i = argc - 1;
	while (i > 0)
	{
		c = 0;
		while (argv[i][c] != '\0')
		{
			write(1, &argv[i][c], 1);
			c++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}

//Create a program with a main function that displays all command-line arguments (except argv[0]) one per line, in reverse order.
