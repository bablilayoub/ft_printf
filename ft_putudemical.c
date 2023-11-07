/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putudemical.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:42:28 by abablil           #+#    #+#             */
/*   Updated: 2023/11/07 17:00:56 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digits(unsigned int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_mini_itoa(unsigned int n)
{
	unsigned int	digits;
	char			*result;

	digits = count_digits(n);
	result = (char *)malloc(sizeof(char) * (digits + 1));
	if (!result)
		return (result);
	result[digits] = '\0';
	while (n != 0)
	{
		result[digits - 1] = n % 10 + '0';
		n /= 10;
		digits--;
	}
	return (result);
}

int	ft_putudemical(int n)
{
	unsigned int	total;
	char			*result;

	total = 0;
	if (n == 0)
		total += ft_putchar('0');
	else
	{
		result = ft_mini_itoa(n);
		total += ft_putstr(result);
		free(result);
	}
	return (total);
}
