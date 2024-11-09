/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 02:30:01 by mazeghou          #+#    #+#             */
/*   Updated: 2024/11/09 02:50:27 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int    ft_put_ptr(void *ptr)
{
    unsigned long   num;
    char            *hex;
	int			print_len;

    num = (unsigned long)ptr;
	print_len = 0;
    hex = "0123456789abcdef";
    if (num >= 16)
        print_len += ft_put_ptr((void *)(num / 16));
    ft_putchar_fd(hex[num % 16], 1);
	return (print_len + 1);
}