/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:09:33 by albriffa          #+#    #+#             */
/*   Updated: 2023/07/12 18:38:12 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 2)
		return (2);
	while (nb > i)
	{
		i ++;
		if (nb % i == 0 && nb != i)
		{
			nb++;
			i = 1;
		}
	}
	return (nb);
}
/*
int	main()
{
	printf("%d", ft_find_next_prime(13274));
}
*/
