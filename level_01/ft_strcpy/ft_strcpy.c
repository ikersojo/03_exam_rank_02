/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:14:59 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/02 17:57:13 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : ft_strcpy
	Expected files   : ft_strcpy.c
	Allowed functions: 
	---------------------------------------------------------------------------
	Reproduce the behavior of the function strcpy (man strcpy).

	Your function must be declared as follows:
		char	*ft_strcpy(char *s1, char *s2);
*/

char	*ft_strcpy(char *s1, char *s2)
{
	while (*s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (s1);
}