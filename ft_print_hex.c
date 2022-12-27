/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaghera <apaghera@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:52:58 by apaghera          #+#    #+#             */
/*   Updated: 2022/12/22 11:54:32 by apaghera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num)
	{
		num = num / 16;
		len++;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, char format)
{
	if (num > 15)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num < 10)
			ft_printchar(num + 48);
		else
		{
			if (format == 'X')
				ft_printchar(num - 10 + 65);
			if (format == 'x')
				ft_printchar(num - 10 + 97);
		}
	}
}

int	ft_hex(unsigned int hex, const char format)
{
	if (!hex)
		return (ft_printchar('0'));
	else
		ft_put_hex(hex, format);
	return (ft_hex_len(hex));
}
