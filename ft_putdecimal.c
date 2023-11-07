/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:01:35 by abablil           #+#    #+#             */
/*   Updated: 2023/11/07 16:09:13 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digits(int n)
{
	int	count;

	count = !n;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_putdecimal(int n)
{
	int	digits;
	int	total;

	total = 0;
	if (n == -2147483648)
	{
		total += ft_putstr("-2147483648");
		return (total);
	}
	if (n < 0)
	{
		n = -n;
		total += ft_putchar('-');
	}
	digits = count_digits(n);
	total += digits;
	if (n >= 10)
		ft_putdecimal(n / 10);
	ft_putchar(n % 10 + '0');
	return (total);
}
