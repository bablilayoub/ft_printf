/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rule.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:55:39 by abablil           #+#    #+#             */
/*   Updated: 2023/11/17 10:28:26 by abablil          ###   ########.fr       */
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

char	is_rule(char const *str, int *i)
{
	if (str[*i] == '%')
	{
		(*i)++;
		*i += skip_spaces(str + *i);
		if (str[*i] == 'c' 
			|| str[*i] == 's' 
			|| str[*i] == 'p' 
			|| str[*i] == 'd' 
			|| str[*i] == 'i' 
			|| str[*i] == '%' 
			|| str[*i] == 'u' 
			|| str[*i] == 'x' 
			|| str[*i] == 'X'
		)
			return (str[*i]);
	}
	return ('\0');
}
