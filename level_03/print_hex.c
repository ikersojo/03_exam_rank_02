/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 08:52:45 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/02 08:52:58 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : print_hex
	Expected files   : print_hex.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a program that takes a positive (or zero) number expressed in base
	10, and displays it in base 16 (lowercase letters) followed by a newline.
	If the number of parameters is not 1, the program displays a newline.

	Examples:
	$> ./print_hex "10" | cat -e
	a$
	$> ./print_hex "255" | cat -e
	ff$
	$> ./print_hex "5156454" | cat -e
	4eae66$
	$> ./print_hex | cat -e
	$
*/