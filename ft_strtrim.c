/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:27:02 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/16 12:19:43 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_findP_start(char const *s1, char const *set)
{
	size_t	cnt;

	cnt = 0;
	while ((cnt < ft_strlen(s1) && (s1[cnt] != '\0')))
	{
		if (ft_strchr(set, s1[cnt]))
			cnt++;
		else
			break ;
	}
	return (cnt);
}

static size_t	ft_findP_end(char const *s1, char const *set)
{
	size_t	cnt;

	cnt = 0;
	while (s1[cnt] != '\0')
		cnt++;
	while ((cnt > 0) && (s1[cnt - 1] != '\0'))
	{
		if (ft_strchr(set, s1[cnt - 1]))
			cnt--;
		else
			break ;
	}
	return (cnt);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	tmpStart;
	size_t	tmpEnd;

	tmpStart = 0;
	tmpEnd = 0;
	if (!s1)
		return (NULL);
	if (ft_strlen(set) == 0)
		return ((char *)s1);
	tmpStart = ft_findP_start(s1, set);
	tmpEnd = ft_findP_end(s1, set);
	return (ft_substr(s1, tmpStart, (tmpEnd - tmpStart)));
}
