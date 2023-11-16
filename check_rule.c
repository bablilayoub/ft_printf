/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rule.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:42:45 by abablil           #+#    #+#             */
/*   Updated: 2023/11/16 15:24:08 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_rule(va_list args, char const *rules, char rule_type, int *i)
{
	int	total;

	total = 0;
	if (rule_type == 'c')
		total += ft_putchar(va_arg(args, int));
	else if (rule_type == 's')
		total += ft_putstr(va_arg(args, char *));
	else if (rule_type == 'p')
		total += ft_putptr(va_arg(args, unsigned long));
	else if (rule_type == 'd' || rule_type == 'i')
		total += ft_putdecimal(va_arg(args, int));
	else if (rule_type == 'u')
		ft_putudemical(va_arg(args, unsigned int), &total);
	else if (rule_type == '%')
		total += ft_putchar('%');
	else if (rule_type == 'x')
		total += ft_print_lower_hex(va_arg(args, unsigned int));
	else if (rule_type == 'X')
		total += ft_print_upper_hex(va_arg(args, unsigned int));
	else if (!rule_type && rules[*i] != '%')
		total += ft_putchar(rules[*i]);
	return (total);
}
