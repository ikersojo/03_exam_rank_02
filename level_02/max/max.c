/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:55:45 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/26 12:59:13 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : max
	Expected files   : max.c
	Allowed functions:
	---------------------------------------------------------------------------
	Write the following function:
	int		max(int* tab, unsigned int len);

	The first parameter is an array of int, the second is the number of
	elements in the array.
	The function returns the largest number found in the array.
	If the array is empty, the function returns 0.
*/

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int				max;

	if (len == 0)
		return (0);
	i = 0;
	max = -2147483648;
	while (i < len)
	{
		if (*(tab + i) > max)
			max = *(tab + i);
		i++;
	}
	return (max);
}
