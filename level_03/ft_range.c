/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 08:59:44 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/02 08:52:58 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : ft_range
	Expected files   : ft_range.c
	Allowed functions: malloc
	---------------------------------------------------------------------------
	Write the following function:
		int		*ft_range(int start, int end);

	It must allocate (with malloc()) an array of integers, fill it with
	consecutive values that begin at start and end at end (Including start and
	end!), then return a pointer to the first value of the array.

	Examples:
	- With (1, 3) you will return an array containing 1, 2 and 3.
	- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
	- With (0, 0) you will return an array containing 0.
	- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/