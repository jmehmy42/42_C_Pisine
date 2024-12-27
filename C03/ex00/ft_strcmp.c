/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin < marvin@42.fr >                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 09:46:11 by marvin            #+#    #+#             */
/*   Updated: 2024/08/26 14:20:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main ()
{
	char arr[]="Hello";
	char arr2[]="Hello";
	int result = ft_strcmp(arr, arr2);

	if( result  ==  0)
	{
		printf ("when both are same : %d\n", result);
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
