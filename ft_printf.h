/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaghera <apaghera@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:23:40 by apaghera          #+#    #+#             */
/*   Updated: 2022/12/22 13:34:45 by apaghera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_hex_len(unsigned int num);
void	ft_put_hex(unsigned int num, char format);
int		ft_hex(unsigned int hex, const char format);
int		ft_num(int n);
int		ft_percent(void);
int		ft_ptr_len(uintptr_t num);
void	ft_put_ptr(uintptr_t num);
int		ft_ptr(unsigned long long ptr);
int		ft_num_len(unsigned int num);
char	*ft_uitoa(unsigned int num);
int		ft_unsigned(unsigned int num);
int		ft_printchar(int c);
int		ft_format(va_list args, const char format);
int		ft_printf(const char *format, ...);
void	ft_putstr(char *str);
int		ft_printstr(char *str);

#endif