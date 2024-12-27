/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin < marvin@42.fr >                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:07:37 by marvin            #+#    #+#             */
/*   Updated: 2024/08/28 15:40:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*int main ()
{
	char source[]="Hello World";
	char destination[]="Hello";
	int result = ft_strncmp(destination,source, 8);
	if (result == 0)
	{
		printf ("both are same %d\n", result);
	}
	if(result <0)
	{	
		printf ("when s1 is less than s2 : %d\n", result);
	}
	if(result>0)
	{
		printf ("when s1 is grater than s2 : %d\n", result);
	}
	return (0);
}*/
