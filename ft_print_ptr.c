/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:32:14 by abablil           #+#    #+#             */
/*   Updated: 2023/11/17 12:40:42 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_ptr(unsigned long ptr, int *total)
{
	char	result[17];
	int		i;

	i = 0;
	while (ptr >= 16)
	{
		result[i] = "0123456789abcdef"[ptr % 16];
		ptr /= 16;
		i++;
	}
	result[i] = '\0';
	if (ptr < 16)
		result[i] = "0123456789abcdef"[ptr];
	result[i + 1] = '\0';
	while (i >= 0)
	{
		*total += ft_print_char(result[i]);
		i--;
	}
}

int	ft_print_ptr(unsigned long ptr)
{
	int	total;

	total = 0;
	if (!ptr)
		return (total += ft_print_str("0x0"));
	total += ft_print_str("0x");
	handle_ptr(ptr, &total);
	return (total);
}
