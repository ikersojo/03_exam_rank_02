/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:55:19 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/10 20:39:20 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : inter
	Expected files   : inter.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a program that takes two strings and displays, without doubles, the
	characters that appear in both strings, in the order they appear in the
	first one. The display will be followed by a \n.
	If the number of arguments is not 2, the program displays \n.

	Examples:
	$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
	padinto$
	$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
	df6ewg4$
	$>./inter "nothing" "This sentence hides nothing" | cat -e
	nothig$
	$>./inter | cat -e
	$
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_ischarset(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	ft_isprinted(int i, char *str)
{
	int	j;

	j = 0;
	while (*(str + j) && (j < i))
	{
		if (*(str + j) == *(str + i))
			return (1);
		j++;
	}
	return (0);
}

void	ft_putstr(char *s1, char *s2)
{
	int		i;
	char	c;

	i = 0;
	while (*(s1 + i))
	{
		c = *(s1 + i);
		if (ft_ischarset(*(s1 + i), s2) && !ft_isprinted(i, s1))
		{
			ft_putchar(c);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;

	if (argc == 3)
	{
		s1 = *(argv + 1);
		s2 = *(argv + 2);
		ft_putstr(s1, s2);
	}
	ft_putchar('\n');
	return (0);
}
