/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:22:47 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/01 09:36:29 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : search_and_replace
	Expected files   : search_and_replace.c
	Allowed functions: write, exit
	---------------------------------------------------------------------------
	Write a program called search_and_replace that takes 3 arguments, the first
	arguments is a string in which to replace a letter (2nd argument) by
	another one (3rd argument).
	If the number of arguments is not 3, just display a newline.
	If the second argument is not contained in the first one (the string)
	then the program simply rewrites the string followed by a newline.

	Examples:
	$>./search_and_replace "Papache est un sabre" "a" "o"
	Popoche est un sobre
	$>./search_and_replace "zaz" "art" "zul" | cat -e
	$
	$>./search_and_replace "zaz" "r" "u" | cat -e
	zaz$
	$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
	$
	$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
	ZaZ eT David aiME le METal.$
	$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e"
		| cat -e
	eNcOre Un ExEmPle Pas Facile a Ecrire $
*/
