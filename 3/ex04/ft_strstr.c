/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:35:39 by albriffa          #+#    #+#             */
/*   Updated: 2023/07/13 17:29:56 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
int	main()
{
	char	str[] = "coucou ca va ?";
	char	to_find[] = "sad";

	printf("%s", ft_strstr(str, to_find));
}*/
