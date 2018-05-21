/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_option.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 10:34:32 by exam              #+#    #+#             */
/*   Updated: 2018/03/13 10:51:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "option.h"

int		is_valid_option(char *arg)
{
	int		i;

	if (!arg || arg[0] != '-')
		return (0);
	i = 0;
	while (arg[++i])
	{
		if (arg[i] < 'a' || arg[i] > 'z')
			return (0);
		if (arg[i] == 'h')
			return (-1);
	}
	if (i <= 1)
		return (0);
	else
		return (1);
}
