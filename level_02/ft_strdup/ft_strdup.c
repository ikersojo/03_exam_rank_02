/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:54:45 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/06 17:36:09 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : ft_strdup
	Expected files   : ft_strdup.c
	Allowed functions: malloc
	---------------------------------------------------------------------------
	Reproduce the behavior of the function strdup (man strdup).

	Your function must be declared as follows:
		char	*ft_strdup(char *src);
*/

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;
	int		i;

	len = ft_strlen(src) + 1;
	copy = (char *)malloc(len * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (*(src + i))
	{
		*(copy + i) = *(src + i);
		i++;
	}
	*(copy + i) = '\0';
	return (copy);
}
