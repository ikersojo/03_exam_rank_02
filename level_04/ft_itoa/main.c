/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:15:00 by isojo-go          #+#    #+#             */
/*   Updated: 2022/11/01 20:18:56 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr);

int	main(int argc, char **argv)
{
	int	num;

	if (argc == 2)
	{
		num = atoi(*(argv + 1));
		printf("FT_ITOA: %s\n", ft_itoa(num));
	}
	return (0);
}