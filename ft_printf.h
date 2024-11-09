/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:56:48 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/09 04:43:57 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int	ft_putstr_fd(char const *s, int fd);
int	ft_putnbr_fd(int n, int fd);
int    ft_put_ptr(void *ptr);
int	ft_strlen(const char *str);
int	ft_putchar_fd(char c, int fd);
int    ft_put_hex(unsigned int num, int uppercase);
int    ft_put_unsigned(unsigned int n);


#endif