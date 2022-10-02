/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:58:35 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/02 08:52:58 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : union
	Expected files   : union.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a program that takes two strings and displays, without doubles, the
	characters that appear in either one of the strings.
	The display will be in the order characters appear in the command line, and
	will be followed by a \n.
	If the number of arguments is not 2, the program displays \n.

	Example:
	$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
	zpadintoqefwjy$
	$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
	df6vewg4thras$
	$>./union "rien" "cette phrase ne cache rien" | cat -e
	rienct phas$
	$>./union | cat -e
	$
	$>
	$>./union "rien" | cat -e
	$
	$>
*/

