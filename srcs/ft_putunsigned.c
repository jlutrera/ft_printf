/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:48:56 by jutrera-          #+#    #+#             */
/*   Updated: 2022/10/04 17:48:56 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned long n, t_flags flags)
{
	char	*s;
	int		len;
	char	c;
	int		i;

	c = 0;
	if (flags.add)
		c = '+';
	else if (flags.space)
		c = ' ';
	s = ft_uitoa(n);
	if (!s)
		return (-1);
	if (*s == '0' && flags.prec == 0)
		*s = '\0';
	len = len_str(s);
	i = putdigit(s, flags, c, len);
	free(s);
	return (i);
}
