/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rule.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:55:39 by abablil           #+#    #+#             */
/*   Updated: 2023/11/24 15:22:18 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	skip_spaces(char const *str)
{
	int	temp;

	temp = 0;
	while (str[temp] == ' ')
		temp++;
	return (temp);
}

static char	in_array(char c)
{
	char	*rules;

	rules = "cspdiuxX%";
	while (*rules)
	{
		if (*rules == c)
			return (c);
		rules++;
	}
	return ('\0');
}

char	is_rule(char const *str, int *i)
{
	if (str[*i] == '%')
	{
		(*i)++;
		*i += skip_spaces(str + *i);
		return (in_array(str[*i]));
	}
	return ('\0');
}
