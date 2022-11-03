/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 08:40:10 by isojo-go          #+#    #+#             */
/*   Updated: 2022/11/03 09:46:37 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : rostring
	Expected files   : rostring.c
	Allowed functions: write, malloc, free
	---------------------------------------------------------------------------
	Write a program that takes a string and displays this string after rotating
	it one word to the left.
	Thus, the first word becomes the last, and others stay in the same order.
	A "word" is defined as a part of a string delimited either by spaces/tabs,
	or by the start/end of the string.
	Words will be separated by only one space in the output.
	If there's less than one argument, the program displays \n.

	Example:
	$>./rostring "abc   " | cat -e
	abc$
	$>
	$>./rostring "Que la      lumiere soit et la lumiere fut"
	la lumiere soit et la lumiere fut Que
	$>
	$>./rostring "     AkjhZ zLKIJz , 23y"
	zLKIJz , 23y AkjhZ
	$>
	$>./rostring "first" "2" "11000000"
	first
	$>
	$>./rostring | cat -e
	$
	$>
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
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
	int	i;
	int	last;

	i = 0;
	while (*(str + i) && ft_isspace(*(str + i)))
		i++;
	while (*(str + i)
		&& !ft_isspace(*(str + i)))
		ft_putchar(*(str + i++));
		i--;
	last = i++;
	while (*(str + i) && !ft_isspace(*(str + i)))
	i = 0;
	while (*(str + i) && (i < last))
	{
		if (ft_isspace(*(str + i)))
			ft_putchar(' ');
		while (*(str + i) && ft_isspace(*(str + i)) && (i < last))
			i++;
		while (*(str + i) && !ft_isspace(*(str + i)) && (i < last))
			ft_putchar(*(str + i++));
	}
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = *(argv + 1);
		ft_putstr(str);
	}
	ft_putchar('\n');
	return (0);
}
