/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:31:39 by albriffa          #+#    #+#             */
/*   Updated: 2023/07/12 10:48:19 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while (i < nb + 1)
	{
		result *= i;
		i++;
	}
	return (result);
}

/*

int	main()
{
	int	nb = 5;

	printf("%d", ft_iterative_factorial(nb));
}
*/
