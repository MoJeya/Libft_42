/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 12:46:11 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/16 11:47:51 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	int	i;

	i = 0;
	while ((str1[i] || str2[i]) && (i < (int)num))
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

//int main()
//{
//	char *s1 = "atoms\0\0\0\0";
//    char *s2 = "atoms\0abc";
//    size_t size = 3;

//	ft_strncmp(s1,s2,size);


//	return (0);
//}
