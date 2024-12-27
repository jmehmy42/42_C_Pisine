/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin < marvin@42.fr >                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:32:10 by marvin            #+#    #+#             */
/*   Updated: 2024/08/21 18:14:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/* int main ()
{
	char str[]="Hello World";
	char *ptr;
	ptr = str;
	ft_putstr(ptr);
}*/
