/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:27:07 by mtsuji            #+#    #+#             */
/*   Updated: 2021/12/04 11:11:13 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conversion_checker(char *format, t_count *count)
{
	if (format[count->index] == 's')
		count->byte += ft_putstr(va_arg(count->argument, char *));
	else if (format[count->index] == 'd')
		count->byte += ft_putnbr(va_arg(count->argument, int));
	else if (format[count->index] == 'x')
		count->byte += to_hexadecimal(va_arg(count->argument, unsigned int),
				format[count->index]);
}
