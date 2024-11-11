/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:35:34 by sguan             #+#    #+#             */
/*   Updated: 2024/09/24 12:16:47 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
#include <stdio.h>

int	main(void)
{
	int var;
	int *nbr;  //defind a pointer variable 'nbr' that points to an integer

	nbr = &var; //store the address of 'var' in pointer 'nbr'

	ft_ft(nbr);

	printf("The value of var: %d\n", var);
	printf("The value pointed to nbr: %d\n",*nbr);
	printf("The address of var: %p\n", &var);
	printf("The address stored in p: %p\n", nbr);
}*/
