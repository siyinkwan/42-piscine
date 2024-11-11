/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:02:42 by sguan             #+#    #+#             */
/*   Updated: 2024/10/01 12:05:14 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	s;
	int	f;

	i = 0;
	s = ft_strlen(str);
	f = ft_strlen(to_find);
	while (i <= s - f)
	{
		j = 0;
		while (j < f)
		{
			if (to_find[j] != str[i + j])
				break ;
			j++;
		}
		if (j == f)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main() 
{
    char *str = "ThisIsTheSource\0";
    char to_find[] = "The";
    //char to_find[] = "is";
    //char *to_find = "ddfd\0";
    
    printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));

    return 0;
}*/
