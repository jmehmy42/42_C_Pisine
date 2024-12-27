/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin < marvin@42.fr >                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:52:34 by marvin            #+#    #+#             */
/*   Updated: 2024/09/04 08:33:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc >= 1)
	{
		while (argv[0][i])
		{
			ft_putchar(argv[0][i]);
			i++;
		}
	}
	write (1, "\n", 1);
}
