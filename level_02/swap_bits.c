/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:58:25 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/01 09:04:39 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : swap_bits
	Expected files   : swap_bits.c
	Allowed functions:
	---------------------------------------------------------------------------
	Write a function that takes a byte, swaps its halves (like the example) and
	returns the result.

	Your function must be declared as follows:

	unsigned char	swap_bits(unsigned char octet);

	Example:

	  1 byte
	_____________
	 0100 | 0001
		 \ /
		 / \
	 0001 | 0100
*/

// Passed Moulinette 2019.09.02

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char result;
	unsigned char new_left_4_bits;
	unsigned char new_right_4_bits;

	new_left_4_bits = octet >> 4;
	new_right_4_bits = octet << 4;
	result = new_left_4_bits | new_right_4_bits;
	return (result);
}

//--------------------------------------------------------------
// #include <stdio.h>
// int				main(void)
// {
// 	unsigned char test = 192;
// 	printf("Should be 12: %d\n", swap_bits(test));
// }