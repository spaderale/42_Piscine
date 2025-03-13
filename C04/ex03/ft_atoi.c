/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:14:22 by abroslav          #+#    #+#             */
/*   Updated: 2025/03/13 18:43:26 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || (str[i] == '-'))
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (neg % 2 != 0)
		return (-result);
	else
		return (result);
}

/*int	main()
{
	char *str = "  --+-+-+--175545s8";
	printf("Return: %d\n", ft_atoi(str));
	return(0);
}*/

//Create a function that mimics atoi, converting the initial part of a string to an integer, handling leading whitespaces, multiple sign characters, and base-10 digits, stopping at invalid input without handling overflow/underflow.
