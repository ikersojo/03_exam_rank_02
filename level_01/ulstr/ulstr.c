/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:23:18 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/04 16:02:08 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : ulstr
	Expected files   : ulstr.c
	Allowed functions: write
	---------------------------------------------------------------------------
	Write a program that takes a string and reverses the case of its letters.
	Other characters remain unchanged.
	You must display the result followed by a '\n'.
	If the number of arguments is not 1, the program displays '\n'.

	Examples :

	$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
	l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
	$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
	s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
	$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
	3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
	$>./ulstr | cat -e
	$
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int		i;
	char	c;

	i = 0;
	while (*(s + i))
	{
		c = *(s + i);
		if (c >= 'a' && c <= 'z')
			ft_putchar(c - ('a' - 'A'));
		else if (c >= 'A' && c <= 'Z')
			ft_putchar(c + ('a' - 'A'));
		else
			ft_putchar(c);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*s;

	s = *(argv + 1);
	if (argc == 2)
		ft_putstr(s);
	ft_putchar('\n');
	return (0);
}
