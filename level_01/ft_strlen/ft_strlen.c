/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:15:35 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/02 18:03:02 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : ft_strlen
	Expected files   : ft_strlen.c
	Allowed functions: 
	---------------------------------------------------------------------------
	Write a function that returns the length of a string.

	Your function must be declared as follows:
		int		ft_strlen(char *str);
*/

int	ft_strlen(char *str)
{
	int	len;

	if (str == 0)
		return (0);
	len = 0;
	while (*str++)
		len++;
	return (len);
}
