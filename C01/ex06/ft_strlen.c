/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:42:04 by sguan             #+#    #+#             */
/*   Updated: 2024/09/25 22:38:05 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;

	str1 = "Bonjour le monde!";
	str2 = "";
	str3 = "42";
	printf("String:%s, Length:%d\n", str1, ft_strlen(str1));
	printf("String:%s, Length:%d\n", str2, ft_strlen(str2));
	printf("String:%s, Length:%d\n", str3, ft_strlen(str3));
}*/
