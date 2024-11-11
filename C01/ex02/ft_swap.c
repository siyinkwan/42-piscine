/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:49:06 by sguan             #+#    #+#             */
/*   Updated: 2024/09/25 22:31:34 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;

	printf("original a: %d\n", a);
	printf("original b: %d\n", b);

	ft_swap(&a, &b);

	printf("new a: %d\n", a);
 	printf("new b: %d\n", b);
}*/
