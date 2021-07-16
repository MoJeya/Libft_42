/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:35:03 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/16 11:32:58 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_lenght (int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = n * (-1);
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*check_Cases(char *s, int num)
{
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (num == 0)
		return (ft_strdup("0"));
	return (s);
}

static char	*ft_setToNegativ(char *result, int f)
{
	if (f)
	{
		result[0] = '-';
		return (result);
	}
	else
		return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		f;

	f = 0;
	len = number_lenght(n);
	if (n < 0)
	{
		f = 1;
		n = -n;
	}
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (result);
	if (n == 0 || n == -2147483648)
		return (check_Cases(result, n));
	result[len] = '\0';
	while (len > 0)
	{
		result[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (ft_setToNegativ(result, f));
}
