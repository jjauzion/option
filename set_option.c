/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_option.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 11:05:57 by exam              #+#    #+#             */
/*   Updated: 2018/03/13 11:25:54 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "option.h"

void		set_option(int *option, char *arg)
{
	int		tmp;

	if (!arg || !option)
		return ;
	arg++;
	while (*arg)
	{
		tmp = 1;
		tmp = tmp << (*arg - 'a');
		*option = *option | tmp;
		arg++;
	}
}

void		print_option(int option)
{
	int		bit;
	int		i;
	int		mask;

	mask = 1 << 31;
	i = 0;
	while (++i <= 32)
	{
		bit = option & mask;
		if (bit == 0)
			ft_putchar('0');
		else
			ft_putchar('1');
		if (i == 8 || i == 16 || i == 24)
			ft_putchar(' ');
		option = option << 1;
	}
	ft_putchar('\n');
}
