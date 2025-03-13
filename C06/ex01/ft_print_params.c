/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:46:15 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 19:01:30 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		c;
	char	*program;

	i = 1;
	while (i < argc)
	{
		program = argv[i];
		c = 0;
		while (program[c] != '\0')
		{
			c++;
		}
		write(1, program, c);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

//Create a program that displays all command-line arguments (except argv[0]), one per line, in the given order.
