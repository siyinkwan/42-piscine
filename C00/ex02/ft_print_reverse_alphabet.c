/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:13:23 by sguan             #+#    #+#             */
/*   Updated: 2024/09/23 11:43:25 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	var;

	var = 'z';
	while (var >= 'a')
	{
		write(1, &var, 1);
		var--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
