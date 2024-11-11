/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 23:11:48 by sguan             #+#    #+#             */
/*   Updated: 2024/09/27 23:20:30 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}

/*
# include <stdio.h>
int     main(void)
{
        char    src[] = "Bonjour";
        char    dest[] = "Hola";

        printf("%s\n",ft_strncpy(dest, src, 8));
        printf("%c\n", dest[3]);
}*/
