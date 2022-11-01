/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 08:39:42 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/02 09:03:42 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : rev_wstr
	Expected files   : rev_wstr.c
	Allowed functions: write, malloc, free
	---------------------------------------------------------------------------
	Write a program that takes a string as a parameter, and prints its words in
	reverse order.
	A "word" is a part of the string bounded by spaces and/or tabs, or the 
	begin/end of the string.
	If the number of parameters is different from 1, the program will display 
	'\n'.
	In the parameters going to be tested, there won't be any addidtional spaces
	(meaning that there won't be additionnal spaces at the beginning or at the
	end of the string, and words will always be separated by exactly one space)

	Examples:
		$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
	ironic? it Isn't gatherings. love I But people! hate You$
	$>./rev_wstr "abcdefghijklm"
	abcdefghijklm
	$> ./rev_wstr "Wingardium Leviosa" | cat -e
	Leviosa Wingardium$
	$> ./rev_wstr | cat -e
	$
	$>
*/