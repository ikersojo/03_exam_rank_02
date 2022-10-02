/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:09:31 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/02 17:28:33 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : first_word
	Expected files   : first_word.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a program that takes a string and displays its first word, followed
	by a newline. A word is a section of string delimited by spaces/tabs or
	by the start/end of the string.
	If the number of parameters is not 1, or if there are no words, simply
	display a newline.

	Examples:
	$> ./first_word "FOR PONY" | cat -e
	FOR$
	$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e 
	this$
	$> ./first_word "   " | cat -e
	$
	$> ./first_word "a" "b" | cat -e
	$
	$> ./first_word "  lorem,ipsum  " | cat -e
	lorem,ipsum$
	$>
*/

#include <unistd.h>

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	char	*s;
	int		i;

	s = *(argv + 1);
	if (argc == 2)
	{
		i = 0;
		while (*(s + i) && (ft_isspace(*(s + i))))
			i++;
		while (*(s + i) && !(ft_isspace(*(s + i))))
			ft_putchar(*(s + i++));
	}
	ft_putchar('\n');
	return (0);
}
