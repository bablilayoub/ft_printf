/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:00:20 by abablil           #+#    #+#             */
/*   Updated: 2023/11/17 10:45:47 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putptr(unsigned long ptr);
int		ft_putdecimal(int c);
void	ft_putudemical(unsigned int n, int *i);
int		ft_print_lower_hex(unsigned int i);
int		ft_print_upper_hex(unsigned int i);
char	is_rule(char const *str, int *i);
int		check_rule(va_list args, char const *rules, char rule_type, int *i);
int		ft_printf(const char *rules, ...);

#endif
