/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaghera <apaghera@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:25:01 by apaghera          #+#    #+#             */
/*   Updated: 2022/12/22 11:55:04 by apaghera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int num)
{
	char	*nb;
	int		len;

	len = ft_num_len(num);
	nb = malloc(sizeof(char) * len + 1);
	if (!nb)
		return (NULL);
	nb[len] = '\0';
	while (num)
	{
		nb[len - 1] = num % 10 + 48;
		num = num / 10;
		len--;
	}
	return (nb);
}

int	ft_unsigned(unsigned int num)
{
	int		len;
	char	*nb;

	len = 0;
	if (!num)
		len += ft_printchar('0');
	nb = ft_uitoa(num);
	len += ft_printstr(nb);
	free (nb);
	return (len);
}
