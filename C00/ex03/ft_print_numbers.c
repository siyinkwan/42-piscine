/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:23:11 by sguan             #+#    #+#             */
/*   Updated: 2024/09/23 11:43:50 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	var;

	var = '0';
	while (var <= '9')
	{
		write(1, &var, 1);
		var++;
	}
}
/*
int	main(void)
{	
	ft_print_numbers();
}
*/
