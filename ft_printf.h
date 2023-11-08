/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:00:20 by abablil           #+#    #+#             */
/*   Updated: 2023/11/08 16:10:13 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putptr(unsigned long ptr);
int		ft_putdecimal(int c);
int		ft_putudemical(int n);
int		ft_printlowerx(unsigned int i);
int		ft_printupperx(unsigned int i);
char	is_rule(char const *str, int *i);
int		check_rule(va_list args, char const *rules, char rule_type, int i);
int		ft_printf(const char *rules, ...);

#endif
