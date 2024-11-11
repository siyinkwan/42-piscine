/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:02:56 by sguan             #+#    #+#             */
/*   Updated: 2024/09/29 13:15:56 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (src[l] != '\0')
		l++;
	if (size == 0)
		return (l);
	while (src[i] && i < size - 1)
	{
		dest[i] = src [i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (l);
}
/*
#include <stdio.h>

int     main(void)
{
    char    src[] = "source";
    char    dest[] = "destination";
    unsigned int     size = 4;

    printf("%d\n", ft_strlcpy(dest, src, size));
    printf("%s", dest);
    return (0);
}*/
