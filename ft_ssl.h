/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 21:28:18 by yinzhang          #+#    #+#             */
/*   Updated: 2019/06/14 21:28:21 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SSL_H
# define FT_SSL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

# define USAGE "usage: ft_ssl command [command opts] [command args]\n"

typedef enum	s_algo
{
	MD5 = 0,
	SHA256,
	INVALID,
}				t_algo;

typedef	struct	s_flags
{
	int		p;
	int		q;
	int		r;
	int		s;
	char	*filename;
}				t_flags;

int		ft_strcmp(const char *s1, const char *s2);

#endif
