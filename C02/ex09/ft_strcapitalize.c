/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:12:52 by sguan             #+#    #+#             */
/*   Updated: 2024/09/29 11:49:16 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_upper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str [i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		k;
	char	j;

	k = 0;
	str = ft_upper(str);
	while (str[k])
	{
		j = str[k - 1];
		if (k == 0 && str[k] >= 'a' && str[k] <= 'z')
			str[k] = str [k] - 32;
		else if (str[k] >= 'a' && str[k] <= 'z')
		{
			if (!((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z')))
				if (!(j >= '0' && j <= '9'))
					str[k] = str [k] - 32;
		}
		k++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
 char test[] = "42salut, comMent tU vas ? 42mots quarante-deux; cinquante+et+un";
 //char test[] = "+salut, comMent tU vas ? 42mMots quarante-deux; cite+et+un";
 //char test[] = "salut, comMent tU vas ? MMMots quarANTe-deux; CINquante+et+un";
	printf("%s", ft_strcapitalize(test));
	return (0);
}*/