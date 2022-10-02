/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:55:52 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/02 08:52:58 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : print_bits
	Expected files   : print_bits.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a function that takes a byte, and prints it in binary WITHOUT A
	NEWLINE AT THE END.
	Your function must be declared as follows:
		void	print_bits(unsigned char octet);

	Example, if you pass 2 to print_bits, it will print "00000010"
*/

// Passed Moulinette 2019.09.01

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int shift = 7;
	unsigned char mask = 1;
	char out;

	while (shift >= 0)
	{
		out = ((octet >> shift) & mask) + '0';
		write(1, &out, 1);
		--shift;
	}
}

#if 0
int	main(void)
{
	print_bits(2);
	write(1, "\n", 1);
}
#endif