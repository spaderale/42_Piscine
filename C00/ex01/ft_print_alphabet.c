/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:24:59 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 15:46:40 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra;

	letra = 'a';
	while (letra <= 'z')
	{
		write(1, &letra, 1);
		letra++;
	}
}

/*int	main(void)
{
	ft_print_alphabet ();
	return (0);
}*/

//Create a function that displays the alphabet in lowercase, on a single line, by
//ascending order, starting from the letter ’a’.
