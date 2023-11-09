/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:32:14 by abablil           #+#    #+#             */
/*   Updated: 2023/11/09 14:53:46 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_ptr(unsigned long ptr, int *total)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)malloc(sizeof(char) * 16);
	if (!result)
		return ;
	while (ptr >= 16)
	{
		result[i] = "0123456789abcdef"[ptr % 16];
		ptr /= 16;
		i++;
	}
	if (ptr < 16)
		result[i] = "0123456789abcdef"[ptr];
	while (i >= 0)
	{
		*total += ft_putchar(result[i]);
		i--;
	}
	free(result);
}

int	ft_putptr(unsigned long ptr)
{
	int	total;

	total = 0;
	total += ft_putstr("0x");
	handle_ptr(ptr, &total);
	return (total);
}
