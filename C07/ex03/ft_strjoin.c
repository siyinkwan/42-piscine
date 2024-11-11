/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:43:12 by sguan             #+#    #+#             */
/*   Updated: 2024/10/08 17:36:38 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += ft_strlen(sep);
		i++;
	}
	return (total_len);
}

void	copy_with_sep(char *result, int size, char **strs, char *sep)
{
	int	k;
	int	i;
	int	pos;
	int	j;

	i = 0;
	pos = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			result[pos++] = strs[i][j++];
		if (i < size - 1)
		{
			k = 0;
			while (sep[k])
				result[pos++] = sep[k++];
		}
		i++;
	}
	result[pos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	total_len = ft_total_len(size, strs, sep);
	result = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!result)
		return (NULL);
	copy_with_sep(result, size, strs, sep);
	return (result);
}
/*
#include <stdio.h>

int	main()
{
	int	size = 0;
	char	*strs[] = {"one", "two", "three", "four"};
	char	*sep = "-&&-";
	char	*result;
	//printf("%d\n",ft_total_len(size, strs, sep));
	result = ft_strjoin(size, strs, sep);
	printf("%s", ft_strjoin(size, strs, sep));
	free (result);
	return (0);
}*/
