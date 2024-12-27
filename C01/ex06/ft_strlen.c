/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin < marvin@42.fr >                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:39:20 by marvin            #+#    #+#             */
/*   Updated: 2024/08/21 18:00:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
int main ()
{
	char str[]="Hello_World";
	char *ptr=str;

	int count = ft_strlen(ptr);

	printf ("%d\n", count);
}*/
