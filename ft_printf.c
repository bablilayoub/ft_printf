/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:31:56 by abablil           #+#    #+#             */
/*   Updated: 2023/11/09 14:54:39 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle(char const *rules, va_list args)
{
	char	rule_type;
	int		i;
	int		printed_args;

	i = 0;
	printed_args = 0;
	while (rules[i] != '\0')
	{
		rule_type = is_rule(rules, &i);
		printed_args += check_rule(args, rules, rule_type, i);
		i++;
	}
	return (printed_args);
}

int	ft_printf(const char *rules, ...)
{
	int		result;
	va_list	args;

	va_start(args, rules);
	result = handle(rules, args);
	va_end(args);
	return (result);
}
