/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:22:11 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/26 11:25:28 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : rotone
	Expected files   : rotone.c
	Allowed functions: write
 	---------------------------------------------------------------------------
	Write a program that takes a string and displays it, replacing each of its
	letters by the next one in alphabetical order.
	'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.
	The output will be followed by a \n.
	If the number of arguments is not 1, the program displays \n.

	Example:
	$>./rotone "abc"
	bcd
	$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
	Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
	$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
	BlkiA aMLJKa , 23z $
	$>./rotone | cat -e
	$
	$>
	$>./rotone "" | cat -e
	$
	$>
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int		i;
	char	c;

	i = 0;
	while (*(s + i))
	{
		c = *(s + i);
		if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
			ft_putchar(c + 1);
		else if (( c == 'z') || (c == 'Z'))
			ft_putchar(c - 25);
		else
			ft_putchar(c);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*s;

	if (argc == 2)
	{
		s = *(argv + 1);
		ft_putstr(s);
	}
	ft_putchar('\n');
	return (0);
}
