/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:39:42 by sguan             #+#    #+#             */
/*   Updated: 2024/09/24 10:46:52 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_recursion(char *num, int n, int index, char first)
{
	if (index == n)
	{
		write(1, num, n);
		if (num[0] != '9' - n + 1)
		{
			write(1, ", ", 2);
			return ;
		}
	}
	while (first <= '9')
	{
		num[index] = first;
		my_recursion(num, n, index + 1, first + 1);
		first++;
	}
}

void	ft_print_combn(int n)
{
	char	num[10];

	if (n <= 0 || n >= 10)
	{
		return ;
	}
	my_recursion(num, n, 0, '0');
}
/*
int	main(void)
{
	ft_print_combn(5);
}*/
