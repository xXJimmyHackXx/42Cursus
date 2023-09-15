/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libre.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:10:17 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/13 16:28:35 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRE_H
# define LIBRE_H

# include <ctype.h>
# include <string.h>

int				ft_isalpha(int str);
int				ft_isascii(int str);
int				ft_isdigit(int str);
int				ft_isalnum(int str);
int				ft_isprint(int str);
unsigned long	ft_strlen(char *str);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);

#endif