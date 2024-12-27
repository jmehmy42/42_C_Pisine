/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin < marvin@42.fr >                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:05:58 by marvin            #+#    #+#             */
/*   Updated: 2024/09/01 18:38:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	factorial = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		factorial = factorial * i;
		i++;
	}
	return (factorial);
}
/* #include <stdio.h>
int main()
{
	int a;
	int result;
	printf ("Enter any Number ");
	scanf ("%d", &a);
	result = ft_iterative_factorial(a);
	if (result < 0)
	printf ("factorial of %d is %d\n", a, result);
	if (result > 0)
	printf ("factorial of %d is %d\n", a, result);
	if (result == 0)
	printf ("factorial of %d is %d\n", a, result);
}*/
