/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:55:11 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/26 17:04:22 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name	: ft_strspn
	Expected files	: ft_strspn.c
	Allowed functions: None
	---------------------------------------------------------------------------
	Reproduce exactly the behavior of the strspn function  (man strspn).

	The function should be prototyped as follows:
		size_t	ft_strspn(const char *s, const char *accept);
*/

#include <string.h>

int	ft_ischarset(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (*((char *)s + i))
	{
		if (ft_ischarset(*((char *)s + i), (char *)accept))
			i++;
		else
			break ;
	}
	return (i);
}
