/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlowerx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:32:33 by abablil           #+#    #+#             */
/*   Updated: 2023/11/07 18:28:50 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_hex(unsigned int n, int *total)
{
	if (n >= 16)
	{
		handle_hex(n / 16, total);
		handle_hex(n % 16, total);
	}
	else
	{
		if (n <= 9)
			*total += ft_putchar((n + '0'));
		else
			*total += ft_putchar((n - 10 + 'a'));
	}
}

int	ft_printlowerx(unsigned int x)
{
	int	total;

	total = 0;
	if (x == 0)
		return (ft_putchar('0'));
	handle_hex(x, &total);
	return (total);
}
