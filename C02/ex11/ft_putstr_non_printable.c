/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:40:58 by sguan             #+#    #+#             */
/*   Updated: 2024/09/29 21:02:00 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	char2hex(unsigned char c)
{
	char	*hex;
	char	first;
	char	second;

	hex = "0123456789abcdef";
	first = hex[c / 16];
	second = hex[c % 16];
	write(1, "\\", 1);
	write(1, &first, 1);
	write(1, &second, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			char2hex(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int	main()
{
	char test[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(test);
	return (0);
}*/