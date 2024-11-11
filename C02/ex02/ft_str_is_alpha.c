/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 23:12:50 by sguan             #+#    #+#             */
/*   Updated: 2024/09/28 15:51:05 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = str[i];
		if (!((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int     main(void)
{
	printf("%d", ft_str_is_alpha("ajgoh"));
	return 0;
}*/
