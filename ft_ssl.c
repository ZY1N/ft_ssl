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
#include "./ft_printf/includes/ft_printf.h"
#include "./ft_printf/includes/libft.h"

/*======================================================================*/

void	ifunknown(char *s)
{
	ft_printf("ft_ssl: Error: '%s' is an invalid command.\n\nStandard \
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
	return(INVALID);
}

void	badflagerror()
{
	ft_printf("\nAccepted flags: -p -q -r -s\n");
	exit(-1);
}


void	findflags(char *s, t_flags *options)
{
	int i;

	i = 0;
	options->q = 0;
	printf("%s", s);
	if (s[0] == '-')
	{
		i++;
		while (s[i])
		{
			if (!ft_strchr("pqrs", s[i]))
				badflagerror();
			i++;
		}
	}


}



int		main(int argc, char **argv)
{
	t_algo algo;
	t_flags *options;
	int		n;

	n = argc;
	options = (t_flags *)malloc(sizeof(t_flags));
	if (argc > 2)
	{
		algo = findalgo(argv[1]);
		if (algo == INVALID)
			ifunknown(argv[1]);
		while (n-- > 0)
			findflags(argv[n], options);
	}
	else 
		write(1, USAGE, 52);
}