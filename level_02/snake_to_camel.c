/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:58:11 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/02 08:52:58 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : snake_to_camel
	Expected files   : snake_to_camel.c
	Allowed functions: malloc, free, realloc, write
	---------------------------------------------------------------------------
	Write a program that takes a single string in snake_case format
	and converts it into a string in lowerCamelCase format.
	A snake_case string is a string where each word is in lower case, separated
	by an underscore "_".
	A lowerCamelCase string is a string where each word begins with a capital
	letter except for the first one.

	Examples:
	$>./camel_to_snake "here_is_a_snake_case_word"
	hereIsASnakeCaseWord
	$>./camel_to_snake "hello_world" | cat -e
	helloWorld$
	$>./camel_to_snake | cat -e
	$
*/
