/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rule.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:42:45 by abablil           #+#    #+#             */
/*   Updated: 2023/11/09 14:42:09 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_rule(va_list args, char const *rules, char rule_type, int i)
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
		total += ft_putudemical(va_arg(args, unsigned int));
	else if (rule_type == '%')
		total += ft_putchar('%');
	else if (rule_type == 'x')
		total += ft_printlowerx(va_arg(args, unsigned int));
	else if (rule_type == 'X')
		total += ft_printupperx(va_arg(args, unsigned int));
	else
		total += ft_putchar(rules[i]);
	return (total);
}
