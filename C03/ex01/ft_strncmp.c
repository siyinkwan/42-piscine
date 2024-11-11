/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:35:36 by sguan             #+#    #+#             */
/*   Updated: 2024/09/30 17:11:57 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
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

	printf("%d\n",ft_strncmp(s1,s2,5));
	printf("%d\n",ft_strncmp(s1,s3,3));
	printf("%d\n",ft_strncmp(s4,s2,7));
	printf("%d\n",ft_strncmp(s4,s5,3));

	printf("%d\n",strncmp(s1,s2,5));
	printf("%d\n",strncmp(s1,s3,3));
	printf("%d\n",strncmp(s4,s2,7));
	printf("%d\n",strncmp(s4,s5,3));
}*/
