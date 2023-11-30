/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:56:05 by isojo-go          #+#    #+#             */
/*   Updated: 2022/11/03 09:59:18 by isojo-go         ###   ########.fr       */
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

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}
