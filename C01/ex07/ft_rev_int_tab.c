/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:10:13 by sguan             #+#    #+#             */
/*   Updated: 2024/09/26 16:34:49 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	size;
	int	tab[] = {0, 1, 2, 3 ,4 ,5, 6, 7};
	int	i;
	int	j;

	size = 8;
	i = 0;
	j = 0;

	while ( i < size)
	{
		printf("%d", tab[i]);
		i++;
	}

	ft_rev_int_tab(tab, size);
	printf("\n");

	while ( j < size)
         {
                 printf("%d", tab[j]);
                 j++;
          }
 
}
*/
