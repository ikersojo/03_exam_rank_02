/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:11:23 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/02 17:39:46 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : fizzbuzz
	Expected files   : fizzbuzz.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a program that prints the numbers from 1 to 100, each separated by a
	newline.
	If the number is a multiple of 3, it prints 'fizz' instead.
	If the number is a multiple of 5, it prints 'buzz' instead.
	If the number is both a multiple of 3 and a multiple of 5, it prints
	'fizzbuzz' instead.
	
	Example:
	$>./fizzbuzz
	1
	2
	fizz
	4
	buzz
	fizz
	7
	8
	fizz
	buzz
	11
	fizz
	13
	14
	fizzbuzz
	[...]
	97
	98
	fizz
	buzz
	$>
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	ft_putnbr(int n)
{
	if (n >= 0 && n <= 9)
		ft_putchar('0' + n);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			ft_putstr("fizzbuzz");
		else if (i % 3 == 0)
			ft_putstr("fizz");
		else if ((i % 5 == 0))
			ft_putstr("buzz");
		else
		{
			ft_putnbr(i);
			ft_putchar('\n');
		}
		i++;
	}
	return (0);
}
