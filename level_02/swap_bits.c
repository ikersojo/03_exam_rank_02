/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:58:25 by isojo-go          #+#    #+#             */
/*   Updated: 2022/11/03 09:59:58 by isojo-go         ###   ########.fr       */
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

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
