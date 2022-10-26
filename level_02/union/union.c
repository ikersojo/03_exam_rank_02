/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:58:35 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/26 14:17:04 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : union
	Expected files   : union.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a program that takes two strings and displays, without doubles, the
	characters that appear in either one of the strings.
	The display will be in the order characters appear in the command line, and
	will be followed by a \n.
	If the number of arguments is not 2, the program displays \n.

	Example:
	$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
	zpadintoqefwjy$
	$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
	df6vewg4thras$
	$>./union "rien" "cette phrase ne cache rien" | cat -e
	rienct phas$
	$>./union | cat -e
	$
	$>
	$>./union "rien" | cat -e
	$
	$>
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	ft_repeated(char *str, char c, int i)
{
	int		j;

	j = 0;
	while (j < i)
	{
		if (*(str + j) == c)
			return (1);
		j++;
	}
	return (0);
}

void	ft_putstr(char *s1, char *s2)
{
	int	i;
	int	len1;

	i = 0;
	while (*(s1 + i))
	{
		if (!ft_repeated(s1, *(s1 + i), i))
			ft_putchar(*(s1 + i));
		i++;
	}
	len1 = i;
	i = 0;
	while (*(s2 + i))
	{
		if (!ft_repeated(s2, *(s2 + i), i) && !ft_repeated(s1, *(s2 + i), len1))
			ft_putchar(*(s2 + i));
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
