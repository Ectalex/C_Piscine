/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:21:40 by albriffa          #+#    #+#             */
/*   Updated: 2023/07/17 13:19:53 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_str_len(int min, int max)
{
	int	i;

	i = 0;
	while (min < max)
	{
		i++;
		min++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	tab = malloc((ft_str_len(min, max) + 1) * sizeof(int));
	i = 0;
	if (tab == NULL || min > max || (min == 0 && max == 0))
		return (NULL);
	while (min < max)
	{
		tab[i] = min + i;
		i++;
		max--;
	}
	tab[i] = 0;
	return (tab);
}
