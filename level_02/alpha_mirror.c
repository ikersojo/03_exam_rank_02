/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:52:51 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/01 09:04:39 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : alpha_mirror
	Expected files   : alpha_mirror.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a program called alpha_mirror that takes a string and displays this
	string 	after replacing each alphabetical character by the opposite
	alphabetical character, followed by a newline:
		'a' becomes 'z', 'Z' becomes 'A'; 'd' becomes 'w', 'M' becomes 'N'...
	Case is not changed.
	If the number of arguments is not 1, display only a newline.

	Examples:

	$>./alpha_mirror "abc"
	zyx
	$>./alpha_mirror "My horse is Amazing." | cat -e
	Nb slihv rh Znzarmt.$
	$>./alpha_mirror | cat -e
	$
	$>
*/

