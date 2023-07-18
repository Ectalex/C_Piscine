/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:41:49 by event             #+#    #+#             */
/*   Updated: 2023/07/12 15:58:47 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
	}
	if (i == n)
		return (0);
	else if (s1[i])
		return (1);
	else if (s2[i])
		return (-1);
	else
		return (0);
}
/*
int     main()
{
        printf("%d", ft_strncmp("1234", "1224", 8));
}
*/
