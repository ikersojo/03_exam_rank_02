/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:17:24 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/02 17:45:16 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : ft_putstr
	Expected files   : ft_putstr.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a function that displays a string on the standard output.
	The pointer passed to the function contains the address of the string's
	first character.

	Your function must be declared as follows:
		void	ft_putstr(char *str);
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
}
