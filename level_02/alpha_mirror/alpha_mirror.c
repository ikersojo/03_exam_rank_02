/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:52:51 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/04 23:08:53 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : alpha_mirror
	Expected files   : alpha_mirror.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a program called alpha_mirror that takes a string and displays this
	string after replacing each alphabetical character by the opposite
	alphabetical character, followed by a newline:
		'a' becomes 'z', 'Z' becomes 'A'; 'd' becomes 'w', 'M' becomes 'N'...
	Case is not changed.
	If the number of arguments is not 1, display only a newline.

	Examples:

	$>./alpha_mirror "abc"
	zyx
	$>./alpha_mirror "My horse is Amazing." | cat -e
	Nb slihv rh Znzarmt.$
	$>./alpha_mirror | cat -e
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
		if (c >= 'a' && c <= 'm')
			ft_putchar('z' - (c - 'a'));
		else if (c >= 'A' && c <= 'M')
			ft_putchar('Z' - (c - 'A'));
		else if (c >= 'n' && c <= 'z')
			ft_putchar('a' + ('z' - c));
		else if (c >= 'N' && c <= 'Z')
			ft_putchar('A' + ('Z' - c));
		else
			ft_putchar(c);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*s;

	s = *(argv + 1);
	if (argc == 2)
		ft_putstr(s);
	ft_putchar('\n');
	return (0);
}
