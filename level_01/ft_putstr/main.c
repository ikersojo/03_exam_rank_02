/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:41:35 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/02 17:46:46 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	char	*s;

	s = *(argv + 1);
	if (argc == 2)
	{
		ft_putstr(s);
		ft_putchar('\n');
	}
	return (0);
}
