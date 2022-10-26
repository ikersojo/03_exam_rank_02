/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:20:49 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/26 11:25:28 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : rot_13
	Expected files   : rot_13.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a program that takes a string and displays it, replacing each of its
	letters by the letter 13 spaces ahead in alphabetical order.
	'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.
	The output will be followed by a newline.
	If the number of arguments is not 1, the program displays a newline.

	Example:
	$>./rot_13 "abc"
	nop
	$>./rot_13 "My horse is Amazing." | cat -e
	Zl ubefr vf Nznmvat.$
	$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
	NxwuM mYXVWm , 23l $
	$>./rot_13 | cat -e
	$
	$>
	$>./rot_13 "" | cat -e
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
		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			ft_putchar(c + 13);
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
			ft_putchar(c - 13);
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
