
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:34:36 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/06/16 10:02:29 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero (void *s, size_t n)
{
    unsigned long cnt;
    char *tmp;

    tmp = (char *)s;
    cnt = 0;

    while (cnt < n)
    {
        tmp[cnt] = '\0'; 
        cnt++;
    }
}
