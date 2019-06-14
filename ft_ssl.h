/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 19:36:25 by yinzhang          #+#    #+#             */
/*   Updated: 2019/06/13 19:36:27 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SSL_H
# define FT_SSL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

# define USAGE "usage: ft_ssl command [command opts] [command args]\n"

typedef enum	a_algo
{
	MD5 = 0,
	SHA256 = 1,
	UNKNOWN = 2,
}				t_algo;

#endif