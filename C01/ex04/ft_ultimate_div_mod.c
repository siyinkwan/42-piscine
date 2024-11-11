/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:56:57 by sguan             #+#    #+#             */
/*   Updated: 2024/09/25 14:26:18 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 6;
	printf("Old a,b: %d,%d\n", a, b);
	ft_ultimate_div_mod(&a,&b);
	printf("New a,b: %d,%d\n",a, b);
}*/
