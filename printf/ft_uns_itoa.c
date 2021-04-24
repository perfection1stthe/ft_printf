/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_itoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:04:13 by mtraball          #+#    #+#             */
/*   Updated: 2021/04/20 17:04:25 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_is_uns_digit(unsigned int c)
{
	return (c > 47 && c < 58);
}

static	int	getlen(unsigned int n)
{
	int	i;

	i = 1;
	while (i < 10)
	{
		if (ft_is_uns_digit(n + 48))
			break ;
		n = n / 10;
		i++;
	}
	return (i);
}

static	void	convert(char *a, unsigned int n, unsigned int len)
{
	while (len-- > 0)
	{
		a[len] = (n % 10) + 48;
		n /= 10;
	}
}

char	*ft_uns_itoa(unsigned int n)
{
	char	*a;
	int		len;

	len = getlen(n);
	a = (char *)malloc(len + 1 * sizeof(char));
	if (!(a))
		return (NULL);
	a[len] = '\0';
	convert(a, n, len);
	return (a);
}
