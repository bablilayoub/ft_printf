/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:00:20 by abablil           #+#    #+#             */
/*   Updated: 2023/11/17 15:35:37 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_print_char(char c);
int		ft_print_str(char *str);
int		ft_print_ptr(unsigned long ptr);
int		ft_print_decimal(int c);
void	ft_print_u_udemical(unsigned int n, int *i);
int		ft_print_hex(unsigned int i, char type);
char	is_rule(char const *str, int *i);
int		check_rule(va_list args, char const *rules, char rule_type, int *i);
int		ft_printf(const char *rules, ...);

#endif
