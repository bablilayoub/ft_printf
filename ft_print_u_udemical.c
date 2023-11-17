/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u_udemical.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:42:28 by abablil           #+#    #+#             */
/*   Updated: 2023/11/17 12:40:52 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_u_udemical(unsigned int n, int *i)
{
	if (n >= 10)
	{
		ft_print_u_udemical(n / 10, i);
		ft_print_u_udemical(n % 10, i);
	}
	else
		*(i) += ft_print_char(n % 10 + '0');
}
