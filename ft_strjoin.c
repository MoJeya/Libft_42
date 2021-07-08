
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 12:24:14 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/06/29 12:24:30 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *cat_str;
    unsigned int len;
    unsigned int cnt;
    unsigned int cnt2;

    if((!s1 || !s2) || (!s1 && !s2))
    {
        return (0);   
    }
    else
    {
        len  = ft_strlen(s1) + ft_strlen(s2);
        cat_str = (char *)malloc((len + 1) * sizeof(char));
        cnt = 0;
        cnt2 = 0;
        
        if(!cat_str)
            return (0);
        ft_bzero(cat_str,0);

        while(cnt < len)
        {
            while(s1[cnt] != '\0')
            {
                cat_str[cnt] = s1[cnt];
                cnt++;
            }

            while (s2[cnt2] != '\0')
            {
                cat_str[cnt] = s2[cnt2];
                cnt2++;
                cnt++;
            }  
        }
        
        cat_str[cnt] = '\0';
        return cat_str;
    }
    return cat_str;
}