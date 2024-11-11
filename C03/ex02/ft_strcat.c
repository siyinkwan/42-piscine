/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:26:24 by sguan             #+#    #+#             */
/*   Updated: 2024/09/30 19:11:20 by sguan            ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
#include <stdio.h> 
#include <string.h>
int main()
{
    char dest[100] = "0123456789";
    char src[] = "ABCD";

    printf("%s\n",dest);

    ft_strcat(dest, src);
	//strcat(dest, src);
    printf("%s\n",dest);
    if (dest[14] != '\0')
        printf("no \\0");

    return (0);
}*/