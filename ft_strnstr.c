
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:18:42 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/06/22 17:18:45 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t cnt;
    size_t cnt2;
    size_t index;
    char *strRet;
    
    cnt = 0;
    cnt2 = 0;
    index = 0;
    strRet = (char *)haystack;

    if((needle[cnt] == '\0') || (needle[cnt] == (char)NULL))
        return strRet;
        
    while((cnt < len) && haystack[cnt] != '\0')
    {
        if(haystack[cnt] == needle[cnt2])
        {
            index = cnt; 
            while(haystack[index] == needle[cnt2] && index < len && haystack[index] != '\0')
            {
                cnt2++;
                index++;
                if(needle[cnt2] == '\0')
                    return ((char *)haystack + cnt);
                
            }
        }
        cnt++;
    }
    
    return 0;
}