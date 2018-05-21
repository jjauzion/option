/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 10:07:22 by exam              #+#    #+#             */
/*   Updated: 2018/03/13 10:16:47 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "option.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	write(1, str, ft_strlen(str));
}
