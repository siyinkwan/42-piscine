/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:00:54 by sguan             #+#    #+#             */
/*   Updated: 2024/09/26 17:57:47 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab [j + 1])
			{
			temp = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	size;
	int	tab [] = {9, 8, 3, 2, 6, 4, 0};

	i = 0;
	j = 0;
	size = 7;
	while (i < size)
	{
		printf("%d",tab[i]);
		i++;
	}
	ft_sort_int_tab(tab,size);
	printf("\n");
	while (j < size)
	{
		printf("%d", tab[j]);
		j++;
	}
}*/		
