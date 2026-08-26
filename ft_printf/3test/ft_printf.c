/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:48:19 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/27 08:29:07 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	assign(int *index, int *bytes, int *spec, t_info *info)
{
	info->index = index;
	info->bytes = bytes;
	info->specifier = spec;
}

static void	loop(t_info *info)
{
	while (info->format[*(info->index)] != '\0')
	{
		*(info->bytes) += writing(info->format, info->index, info->specifier);
		if (*(info->specifier) == 'c')
			*(info->bytes) += c_w(va_arg(info->args, int), info->index);
		else if (*(info->specifier) == 's')
			*(info->bytes) += s_w(va_arg(info->args, char *), info->index);
		else if (*(info->specifier) == 'p')
			*(info->bytes) += p_w(va_arg(info->args, void *), info->index);
		else if (*(info->specifier) == 'd' || *(info->specifier) == 'i')
			*(info->bytes) += d_w(va_arg(info->args, int), info->index);
		else if (*(info->specifier) == 'u')
			*(info->bytes) += u_w(va_arg(info->args, unsigned int),
					info->index);
		else if (*(info->specifier) == 'x')
			*(info->bytes) += h_w(va_arg(info->args, unsigned int),
					info->index);
		else if (*(info->specifier) == 'X')
			*(info->bytes) += uph_w(va_arg(info->args, int), info->index);
		else if (*(info->specifier) == '%')
			*(info->bytes) += per_write(info->index);
		*(info->specifier) = 0;
	}
}

int	ft_printf(const char *format, ...)
{
	int		bytes;
	int		spec;
	int		index;
	t_info	info;

	index = 0;
	bytes = 0;
	spec = 0;
	assign(&index, &bytes, &spec, &info);
	info.format = format;
	va_start(info.args, format);
	loop(&info);
	va_end(info.args);
	return (bytes);
}

/*	while (format[*index] != '\0')
	{
		bytes += writing(format, index, specifier);
		if (*specifier == 'c')
			bytes += write_char(va_arg(args, int), index);
		else if (*specifier == 's')
			bytes += write_str(va_arg(args, char *), index);
		else if (*specifier == 'p')
			bytes += pointer_write(va_arg(args, void *), index);
		else if (*specifier == 'd' || *specifier == 'i')
			bytes += write_digits(va_arg(args, int), index);
		else if (*specifier == 'u')
			bytes += unsigned_write(va_arg(args, unsigned int), index);
		else if (*specifier == 'x')
			bytes += hex_write(va_arg(args, unsigned int), index);
		else if (*specifier == 'X')
			bytes += uphex_write(va_arg(args, int), index);
		else if (*specifier == '%')
			bytes += per_write(index);
		*specifier = 0;
	}
	va_end(args);
	return (bytes);
}*/
