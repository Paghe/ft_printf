/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaghera <apaghera@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:13:37 by apaghera          #+#    #+#             */
/*   Updated: 2022/12/31 14:48:43 by apaghera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		len += ft_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		len += ft_num(va_arg(args, int));
	else if (format == 'u')
		len += ft_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		len += ft_percent();
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_format(args, format[i + 1]);
			i++;
		}
		else
			len += ft_printchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
