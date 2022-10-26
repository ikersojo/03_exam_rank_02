/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:58:43 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/26 14:27:30 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : wdmatch
	Expected files   : wdmatch.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a program that takes two strings and checks whether it's possible to
	write the first string with characters from the second string, while
	respecting the order in which these characters appear in the second string.
	If it's possible, the program displays the string, followed by a \n,
	otherwise it simply displays a \n.
	If the number of arguments is not 2, the program displays a \n.

	Examples:
	$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
	faya$
	$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
	$
	$>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq "
	 | cat -e
	forty two$
	$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
	$
	$>./wdmatch | cat -e
	$
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

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	ft_check(char *s1, char *s2)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (*(s1 + i))
	{
		while (*(s2 + j))
		{
			if (*(s1 + i) == *(s2 + j))
			{
				count++;
				break ;
			}
			j++;
		}
		i++;
	}
	if (count == ft_strlen(s1))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;

	if (argc == 3)
	{
		s1 = *(argv + 1);
		s2 = *(argv + 2);
		if (ft_check(s1, s2))
			ft_putstr(s1);
	}
	ft_putchar('\n');
	return (0);
}
