/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:35:03 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/07 16:55:14 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_lenght (int n)
{
	int	len;

	if (n == INT32_MIN)
		n = INT32_MAX;
	if (n < 0)
		n = n * (-1);
	len = 0;
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*setString_To_neg(char *s, int num)
{
	int		pos;
	char	*neg_str;
	int		len;

	len = number_lenght(num) + 1;
	pos = 1;
	neg_str = (char *)malloc((len + 1) * sizeof(char));
	if (!neg_str)
		return (NULL);
	neg_str[0] = '-';
	ft_strlcpy(&neg_str[pos], s, len);
	if (num == INT32_MIN)
		neg_str[len - 1] = '8';
	return (neg_str);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		num;

	len = number_lenght(n);
	num = n;
	if (n < 0)
		num = num * (-1);
	if (n == INT32_MIN)
		num = INT32_MAX;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (n == 0)
		return ("0");
	if (!result)
		return (NULL);
	while (len--)
	{
		result[len] = ((num % 10) + '0');
		num = num / 10;
	}
	if (n < 0 || n == INT32_MIN)
		return (setString_To_neg(result, n));
	return (result);
}
