/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:26:21 by albriffa          #+#    #+#             */
/*   Updated: 2023/07/18 11:29:18 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!range)
		return (-1);
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}

int	main(int argc, char *argv[])
{

}
