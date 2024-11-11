/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:53:40 by sguan             #+#    #+#             */
/*   Updated: 2024/09/25 22:34:33 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int x;
	int y;
	int div;
	int mod;

	x = 100;
	y = 20;
	div = 0;
	mod = 0;
	ft_div_mod(x, y, &div, &mod);
	printf("%d\n", div);
printf("%d", mod);
}*/
