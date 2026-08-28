#include "ft_printf.h"

int check_error(t_info *info)
{
	if (info->error_flag == -1)
		return 1;
	else
		return 0;
}
