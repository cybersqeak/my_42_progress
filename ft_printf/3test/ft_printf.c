/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:48:19 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/28 11:57:12 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	assign(int *index, int *bytes, int *spec, t_info *info)
{
	info->index = index;
	info->bytes = bytes;
	info->specifier = spec;
}

static int	loop(t_info *info)
{
	while (info->format[*(info->index)] != '\0')
	{
		writing(info);
		if (check_error(info))
			return -1;
		if (*(info->specifier) == 'c')
			c_w(va_arg(info->args, int), info);
		else if (*(info->specifier) == 's')
			s_w(va_arg(info->args, char *), info);
		else if (*(info->specifier) == 'p')
			p_w(va_arg(info->args, void *), info);
		else if (*(info->specifier) == 'd' || *(info->specifier) == 'i')
			d_w(va_arg(info->args, int), info);
		else if (*(info->specifier) == 'u')
			u_w(va_arg(info->args, unsigned int),info);
		else if (*(info->specifier) == 'x')
			h_w(va_arg(info->args, unsigned int),info);
		else if (*(info->specifier) == 'X')
			uph_w(va_arg(info->args, int), info);
		else if (*(info->specifier) == '%')
			per_write(info);
		if (check_error(info))
			return -1;
	}
	return 1;
}

int	ft_printf(const char *format, ...)
{
	int		bytes;
	int		spec;
	int		index;
	int		result;
	t_info	info;

	index = 0;
	bytes = 0;
	spec = 0;
	assign(&index, &bytes, &spec, &info);
	info.format = format;
	va_start(info.args, format);
	result = loop(&info);
	va_end(info.args);
	if (result == -1)
		return -1;
	printf("hello\n");
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
