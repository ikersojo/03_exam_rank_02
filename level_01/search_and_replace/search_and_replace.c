/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:22:47 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/26 11:27:49 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : search_and_replace
	Expected files   : search_and_replace.c
	Allowed functions: write, exit
	---------------------------------------------------------------------------
	Write a program called search_and_replace that takes 3 arguments, the first
	arguments is a string in which to replace a letter (2nd argument) by
	another one (3rd argument).
	If the number of arguments is not 3, just display a newline.
	If the second argument is not contained in the first one (the string)
	then the program simply rewrites the string followed by a newline.

	Examples:
	$>./search_and_replace "Papache est un sabre" "a" "o"
	Popoche est un sobre
	$>./search_and_replace "zaz" "art" "zul" | cat -e
	$
	$>./search_and_replace "zaz" "r" "u" | cat -e
	zaz$
	$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
	$
	$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
	ZaZ eT David aiME le METal.$
	$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e"
		| cat -e
	eNcOre Un ExEmPle Pas Facile a Ecrire $
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s, char a, char b)
{
	int		i;
	char	c;

	i = 0;
	while (*(s + i))
	{
		c = *(s + i);
		if (c == a)
			ft_putchar(b);
		else
			ft_putchar(c);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	char	*s;
	char	a;
	char	b;

	if (argc == 4 && (ft_strlen(*(argv + 2)) == 1) && (ft_strlen(*(argv + 3)) == 1))
	{
		s = *(argv + 1);
		a = **(argv + 2);
		b = **(argv + 3);
		ft_putstr(s, a, b);
	}
	ft_putchar('\n');
	return (0);
}
