/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin < marvin@42.fr >                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 08:56:58 by marvin            #+#    #+#             */
/*   Updated: 2024/09/02 17:57:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
	{
		return (0);
	}
}
/* #include <stdio.h>
int main ()
{
	int a;
	int result;
	printf("Enter any Number ");
	scanf ("%d", &a);
	result = ft_recursive_factorial(a);
	if (result < 0)
	printf ("factorial of %d is %d\n", a, result);
	if (result > 0)
	printf ("factorial of %d is %d\n", a, result);
	if (result == 0)
	printf ("factorial of %d is %d\n", a, result);
}*/
