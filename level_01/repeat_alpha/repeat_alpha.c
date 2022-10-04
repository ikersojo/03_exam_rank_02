/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:19:41 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/03 20:52:33 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : repeat_alpha
	Expected files   : repeat_alpha.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a program called repeat_alpha that takes a string and display it
	repeating each alphabetical character as many times as its alphabetical
	index, followed by a newline. Case remains unchanged.
	'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...
	If the number of arguments is not 1, just display a newline.

	Examples:
	$>./repeat_alpha "abc"
	abbccc
	$>./repeat_alpha "Alex." | cat -e
	Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
	$>./repeat_alpha 'abacadaba 42!' | cat -e
	abbacccaddddabba 42!$
	$>./repeat_alpha | cat -e
	$
	$>
	$>./repeat_alpha "" | cat -e
	$
	$>
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_getx(char c)
{
	int	x;

	if (c >= 'a' && c <= 'z')
		x = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		x = c - 'A' + 1;
	else
		x = 1;
	return (x);
}

void	ft_putstr(char *str)
{
	int		i;
	int		x;
	char	c;

	i = 0;
	x = 1;
	while (*(str + i))
	{
		c = *(str + i);
		x = ft_getx(c);
		while (x > 0)
		{
			ft_putchar(c);
			x--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*s;

	s = *(argv + 1);
	if (argc == 2)
	{
		ft_putstr(s);
	}
	ft_putchar('\n');
	return (0);
}
