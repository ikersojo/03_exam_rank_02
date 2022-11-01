/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:35:27 by isojo-go          #+#    #+#             */
/*   Updated: 2022/11/01 18:33:22 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : fprime
	Expected files   : fprime.c
	Allowed functions: printf, atoi
	---------------------------------------------------------------------------
	Write a program that takes a positive int and displays its prime factors on
	the standard output, followed by a newline.
	Factors must be displayed in ascending order and separated by '*', so that
	the expression in the output gives the right result.
	If the number of parameters is not 1, simply display a newline.
	The input, when there is one, will be valid.

	Examples:
	$> ./fprime 225225 | cat -e
	3*3*5*5*7*11*13$
	$> ./fprime 8333325 | cat -e
	3*3*5*5*7*11*13*37$
	$> ./fprime 9539 | cat -e
	9539$
	$> ./fprime 804577 | cat -e
	804577$
	$> ./fprime 42 | cat -e
	2*3*7$
	$> ./fprime 1 | cat -e
	1$
	$> ./fprime | cat -e
	$
	$> ./fprime 42 21 | cat -e
	$
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putunbr(int n)
{
	if (n > 9)
		ft_putunbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13 )|| c == 32)
		return (1);
	return (0);
}

unsigned int	ft_atoi(char *str)
{
	unsigned int	n;

	n = 0;
	while (*str && ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	while (*str && !ft_isspace(*str))
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n);
}

int	ft_isprime(unsigned int n)
{
	unsigned int	i;

	i = 2;
	while (n % i == 0)
		return (0);
	return (1);
}

void	ft_putprime(unsigned int n)
{
	unsigned int	i;

	i = 2;
	while (i <= n)
	{
		if (n % i == 0 && ft_isprime(i))
		{
			ft_putunbr(i);
			n = n / i;
			if (n != 1)
				ft_putchar('*');
			i = 2;
		}
		else
			i++;
	}
}

int	main(int argc, char **argv)
{
	unsigned int	num;

	if (argc == 2)
	{
		num = ft_atoi(*(argv + 1));
		ft_putprime(num);
	}
	ft_putchar('\n');
	return (0);
}