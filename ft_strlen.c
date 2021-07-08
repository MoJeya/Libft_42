
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 18:10:34 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/06/23 16:51:20 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    unsigned long cnt;

    cnt = 0;

    while(s[cnt] != '\0')
    {
        cnt++;
    }
    return cnt;
}