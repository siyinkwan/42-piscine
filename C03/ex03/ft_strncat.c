/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:12:59 by sguan             #+#    #+#             */
/*   Updated: 2024/09/30 19:50:39 by sguan            ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
#include <stdio.h> 
#include <string.h>

int main()
{
    char dest[100] = "0123456789";
    char src[] = "ABCD";
    unsigned int nb;

    char dest1[100] = "0123456789";
    char src1[] = "ABCD";

    nb = 5;
    printf("%s\n",dest);
    ft_strncat(dest, src, nb);
    printf("new dest: %s\n",dest);
	strncat(dest1, src1, nb);
	printf("new dest: %s\n",dest1);

    return (0);
}*/