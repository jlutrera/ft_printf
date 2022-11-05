/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:57:24 by jutrera-          #+#    #+#             */
/*   Updated: 2022/09/27 19:09:08 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>

static const char	g_base[] = "0123456789abcdef";
typedef struct s_flags{
	int		dot;
	bool	sharp;
	bool	add;
	bool	minus;
	bool	space;
	bool	zero;
	int		width;
	int		prec;
	char	type;
}	t_flags;
int		ft_printf(char const *format, ...);
int		ft_putchar(char c);
int		ft_putchar_bonus(char c, t_flags flags);
int		ft_putstr(char *s);
int		ft_putstr_bonus(char *s, t_flags flags);
int		ft_putdigit(long n, t_flags flags);
int		ft_putunsigned(unsigned long n, t_flags flags);
int		ft_puthex(unsigned int nb, t_flags flags);
int		ft_putpointer(void *pointer, t_flags flags);
int		char_in_str(char c, char const *s);
int		len_str(char *s);
int		len_number(long n, int len_base);
int		ulen_number(unsigned long n, int len_base);
char	*ft_uitoa(unsigned long n);
char	*ft_itoa(long n);
t_flags	read_flags(char *s, va_list ap);
int		ft_zeros(t_flags flags, char c, int len);
int		ft_spaces(t_flags flags, char c, int len);
int		putdigit(char *s, t_flags flags, char c, int len);
#endif