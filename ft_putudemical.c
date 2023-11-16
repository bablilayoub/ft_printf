/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putudemical.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:42:28 by abablil           #+#    #+#             */
/*   Updated: 2023/11/16 15:22:56 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putudemical(unsigned int n, int *i)
{
	if (n >= 10)
	{
		ft_putudemical(n / 10, i);
		ft_putudemical(n % 10, i);
	}
	else
		*(i) += ft_putchar(n % 10 + '0');
}
