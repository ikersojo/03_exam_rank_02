/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:51:41 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/10 20:54:29 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n);

int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = atoi(*(argv + 1));
		if (is_power_of_2(n))
			printf("is power of 2!\n");
		else
			printf("is NOT!\n");
	}
	return (0);
}
