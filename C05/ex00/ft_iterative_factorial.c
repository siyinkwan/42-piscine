/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:50:03 by sguan             #+#    #+#             */
/*   Updated: 2024/10/01 23:23:06 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		res *= nb - 1;
		nb--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main()
{
	int	nb;

	nb = 1;
	printf("%d", ft_iterative_factorial(nb));
}*/
