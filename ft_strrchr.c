
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:07:52 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/06/21 16:43:05 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *str;
    char ch;
    int cnt;
    int cnt2;
    int apr;

    ch = (char)c;
    str = (char *)s;
    cnt = 0;
    cnt2 = 0;
    apr = 0;

    if((ft_isascii(s[0])) && (s[0] != '\0'))
    {
    
        while(s[cnt2] != '\0')
        {
            if(s[cnt2] == ch)
                apr++;
            cnt2++;
        }

        while(*str != '\0')
        {
        
            if(*str == ch)
            {
                cnt++;
                if(cnt >= apr)
                    break;
            }
            str++;
        }
        return str;
    }
    else
        return NULL;
}
