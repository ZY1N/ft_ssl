/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:38:02 by yinzhang          #+#    #+#             */
/*   Updated: 2019/06/13 14:38:04 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl.h"

int		ft_strcmp(const char *s1, const char *s2)
{
		int i;

		i = 0;
		while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
			i++;
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*======================================================================*/

void	error()
{
	printf("error try again");
	exit(-1);
}

void	ifunknown(char *s)
{
	printf("ft_ssl: Error: '%s' is an invalid command.\n\nStandard \
	commands:\n\nMessage Digest commands:\nmd5\nsha256\n\nCipher \
	commands:\n", s);
	exit(-1);
}


/*======================================================================*/

t_algo	findalgo(char *s)
{
	if (ft_strcmp(s, "md5") == 0)
		return(MD5);
	else if (ft_strcmp(s, "sha256") == 0)
		return(SHA256);
	return(UNKNOWN);
}

int		main(int argc, char **argv)
{
	t_algo a;

	if (argc > 2)
	{
		a = findalgo(argv[1]);
		if (a == UNKNOWN)
			ifunknown(argv[1]);
		
		driver(argv[1], argv[2]);
	}
	else 
		write(1, USAGE, 52);
}