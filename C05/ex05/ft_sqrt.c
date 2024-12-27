/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin < marvin@42.fr >                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:08:37 by marvin            #+#    #+#             */
/*   Updated: 2024/09/03 16:54:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	int a;
	int result;
	printf("Enter any Number ");
	scanf ("%d", &a);
	result = ft_sqrt(a);
	if (result > 1)
	printf("perfect square of %d is %d\n", result, a);
	else 
	printf("%d is not valid input %d\n",a, result);
}*/
