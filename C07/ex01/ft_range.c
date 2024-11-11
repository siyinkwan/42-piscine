/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 22:09:23 by sguan             #+#    #+#             */
/*   Updated: 2024/10/07 12:51:35 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>

int	main ()
{
	int	min = -100;
	int	max = 9;
	int	*arr;

	arr = ft_range(min, max);
	for(int i = 0; i < max - min; i++)
	{
		printf("%d,", arr[i]);
	}
	free(arr);
	return 0;
}*/