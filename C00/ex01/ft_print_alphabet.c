/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:03:17 by sguan             #+#    #+#             */
/*   Updated: 2024/09/22 22:41:05 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	var;

	var = 'a';
	while (var <= 'z')
	{
		write(1, &var, 1);
		var++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
}
*/
