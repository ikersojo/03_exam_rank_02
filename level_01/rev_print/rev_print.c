/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:20:20 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/26 11:23:17 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : rev_print
	Expected files   : rev_print.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a program that takes a string, and displays the string in reverse
	followed by a newline.
	If the number of parameters is not 1, the program displays a newline.

	Examples:
	$> ./rev_print "zaz" | cat -e
	zaz$
	$> ./rev_print "dub0 a POIL" | cat -e
	LIOP a 0bud$
	$> ./rev_print | cat -e
	$
*/

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	if (str == 0)
		return (0);
	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putrstr(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		ft_putchar(*(str + i));
		i--;
	}
}

int	main(int argc, char **argv)
{
	char	*s;

	if (argc == 2)
	{
		s = *(argv + 1);
		ft_putrstr(s);
	}
	ft_putchar('\n');
	return (0);
}
