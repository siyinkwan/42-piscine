/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:51:31 by sguan             #+#    #+#             */
/*   Updated: 2024/09/30 13:57:13 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char *s1 = "Hello!";
	char *s2 = "Bonjoura";
	char *s3 = "Hel";
	char *s4 = "Bonjour";
	char *s5 = "Bonjour";

	printf("%d\n",ft_strcmp(s1,s2));
	printf("%d\n",ft_strcmp(s1,s3));
	printf("%d\n",ft_strcmp(s4,s2));
	printf("%d\n",ft_strcmp(s4,s5));

	// printf("%d\n",strcmp(s1,s2));
	// printf("%d\n",strcmp(s1,s3));
	// printf("%d\n",strcmp(s4,s2));
	// printf("%d\n",strcmp(s4,s5));
}*/