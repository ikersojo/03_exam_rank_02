/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:19:41 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/01 09:36:29 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : repeat_alpha
	Expected files   : repeat_alpha.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a program called repeat_alpha that takes a string and display it
	repeating each alphabetical character as many times as its alphabetical
	index, followed by a newline. Case remains unchanged.
	'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...
	If the number of arguments is not 1, just display a newline.

	Examples:
	$>./repeat_alpha "abc"
	abbccc
	$>./repeat_alpha "Alex." | cat -e
	Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
	$>./repeat_alpha 'abacadaba 42!' | cat -e
	abbacccaddddabba 42!$
	$>./repeat_alpha | cat -e
	$
	$>
	$>./repeat_alpha "" | cat -e
	$
	$>
*/