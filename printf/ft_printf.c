/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:31:51 by jagarci2          #+#    #+#             */
/*   Updated: 2023/11/29 19:49:13 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

// void	ft_putchar(char a)
// {
// 	write (1, &a, 1);
// }

// int	print_char(char a)
// {
// 	ft_putchar(a);
// 	return (1);
// }

// int	print_str(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		print_char(str[i]);
// 		i++;
// 	}
// 	return (1);
// }

// static int	ft_var_type(const char *str, void *ptr)
// {
// 	int	i;

// 	i = 0;
// 	if (*str == 'c')
// 		i += print_char((int)ptr);
// 	if (*str == 's')
// 		i += print_str((int)ptr);
// 	if (*str == 'p')
// 		i += print_ptr((int)ptr);
// 	if (*str == 'd')
// 		i += print_dec((int)ptr);
// 	if (*str == 'i')
// 		i += print_whole((int)ptr);
// 	if (*str == 'u')
// 		i += print_char((int)ptr);
// 	if (*str == 'x')
// 		i += print_hex_min((int)ptr);
// 	if (*str == 'X')
// 		i += print_hex_cap((int)ptr);
// 	if (*str == '%')
// 		i += print_prc((int)ptr);
// }

// int	ft_printf(char const *str, ...)
// {
// 	int		i;
// 	va_list	ptr;

// 	va_start (ptr, str);
// 	while (str)
// 	{
// 		if (str[i] == "%")
// 		{
// 			i++;
// 			ft_var_type()
// 		}
// 	}
// }

// int main()
// {
//     print_char('H');
//     print_char('e');
//     print_char('l');
//     print_char('l');
//     print_char('o');

//     char myString[] = " World!";
//     print_str(myString);

//     return 0;
// }
int main()
{
	printf("ptr%p" 'hola')
}