/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:17:02 by sguan             #+#    #+#             */
/*   Updated: 2024/09/23 17:21:16 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_print(int a, int b)
{
	char	first_a;
	char	second_a;
	char	first_b;
	char	second_b;

	first_a = a / 10 + '0';
	second_a = a % 10 + '0';
	first_b = b / 10 + '0';
	second_b = b % 10 + '0';
	write(1, &first_a, 1);
	write(1, &second_a, 1);
	write(1, " ", 1);
	write(1, &first_b, 1);
	write(1, &second_b, 1);
	if (a != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			my_print(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
