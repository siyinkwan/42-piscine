/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:29:47 by sguan             #+#    #+#             */
/*   Updated: 2024/09/28 22:07:44 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;
	char	j;

	i = 0;
	while (str[i])
	{
		j = str[i];
		if (j >= 'a' && j <= 'z')
			str[i] = str [i] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
    char   test[] = "jahj";
	printf("%s", ft_strupcase(test));
	return (0);
}*/
