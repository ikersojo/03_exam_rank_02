/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:50:02 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/02 17:56:14 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2);

int	main(void)
{
	char	dst1[100];
	char	dst2[100];
	char	src[] = "esto es una prueba\n";

	strcpy(dst1, src);
	ft_strcpy(dst2, src);
	printf(" C_STRCPY: %s", dst1);
	printf("FT_STRCPY: %s", dst2);
	return (0);
}