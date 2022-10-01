/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:56:05 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/01 09:04:39 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : reverse_bits
	Expected files   : reverse_bits.c
	Allowed functions:
	---------------------------------------------------------------------------
	Write a function that takes a byte, reverses it, bit by bit (like the
	example) and returns the result.

	Your function must be declared as follows:
	unsigned char	reverse_bits(unsigned char octet);

	Example:

	  1 byte
	_____________
	 0100  0001
		 ||
		 \/
	 1000  0010
*/

// Passed Moulinette 2019.09.01

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char out = 0;

	out = out | ((octet & 128) >> 7);
	out = out | ((octet & 64) >> 5);
	out = out | ((octet & 32) >> 3);
	out = out | ((octet & 16) >> 1);
	out = out | ((octet & 8) << 1);
	out = out | ((octet & 4) << 3);
	out = out | ((octet & 2) << 5);
	out = out | ((octet & 1) << 7);
	return (out);
}
