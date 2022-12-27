/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaghera <apaghera@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:50:48 by apaghera          #+#    #+#             */
/*   Updated: 2022/12/22 11:54:37 by apaghera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num(int n)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_itoa(n);
	len = ft_printstr(str);
	free(str);
	return (len);
}
