/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:16:40 by albriffa          #+#    #+#             */
/*   Updated: 2023/07/12 11:40:32 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
/*
int	main()
{
	printf("%d", ft_recursive_power(5, 2));
}
*/
