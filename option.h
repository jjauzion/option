/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 10:11:11 by exam              #+#    #+#             */
/*   Updated: 2018/03/13 11:17:05 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTION_H
# define OPTION_H

# include <unistd.h>

void			ft_putchar(char c);
int				ft_strlen(char *str);
void			ft_putstr(char *str);
int				is_valid_option(char *arg);
void			set_option(int *option, char *arg);
void			print_option(int option);

#endif
