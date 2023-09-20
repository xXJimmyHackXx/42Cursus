/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:10:17 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/20 18:33:37 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "libft.h"
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>

int				ft_isalpha(int str);
int				ft_isascii(int str);
int				ft_isdigit(int str);
int				ft_isalnum(int str);
int				ft_isprint(int str);
size_t			ft_strlen(const char *str);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
char			*ft_strnstr(const char *src, const char *dest, size_t len);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);

#endif