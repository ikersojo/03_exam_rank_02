/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:59:55 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/02 18:04:03 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = *(argv + 1);
		printf(" C_STRCPY: %lu\n", strlen(str));
		printf("FT_STRCPY: %d\n", ft_strlen(str));
	}
	return (0);
}
