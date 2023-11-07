/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:32:14 by abablil           #+#    #+#             */
/*   Updated: 2023/11/07 22:33:17 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_ptr(uintptr_t nb, int *total)
{
	if (nb >= 16)
	{
		handle_ptr(nb / 16, total);
		handle_ptr(nb % 16, total);
	}
	else
	{
		if (nb <= 9)
			*total += ft_putchar((nb + '0'));
		else
			*total += ft_putchar((nb - 10 + 'a'));
	}
}

int	ft_putptr(uintptr_t ptr)
{
	int	total;

	total = 0;
	total += ft_putstr("0x");
	if (ptr == 0)
		total += ft_putchar('0');
	else
		handle_ptr(ptr, &total);
	return (total);
}
