/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:53:18 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/26 12:12:07 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : camel_to_snake
	Expected files   : camel_to_snake.c
	Allowed functions: malloc, free, realloc, write
	---------------------------------------------------------------------------
	Write a program that takes a single string in lowerCamelCase format
	and converts it into a string in snake_case format.
	A lowerCamelCase string is a string where each word begins with a capital
	letter except for the first one.
	A snake_case string is a string where each word is in lower case, separated
	by an underscore "_".

	Examples:
	$>./camel_to_snake "hereIsACamelCaseWord"
	here_is_a_camel_case_word
	$>./camel_to_snake "helloWorld" | cat -e
	hello_world$
	$>./camel_to_snake | cat -e
	$
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_tosnake(char *s)
{
	int		i;
	char	c;

	i = 0;
	while (*(s + i))
	{
		c = *(s + i);
		if (c >= 'A' && c <= 'Z')
		{
			ft_putchar('_');
			ft_putchar(c + ('a' - 'A'));
		}
		else if (c != ' ')
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
		ft_tosnake(s);
	}
	ft_putchar('\n');
	return (0);
}
