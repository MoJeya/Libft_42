
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:11:14 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/06/23 12:11:18 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp ( const char * str1, const char * str2, size_t num )
{
    size_t result;
    size_t cnt;
    size_t check;

    cnt = 0;
    check = 0;
    if((str2[check] == '\0') && (str1[check] != '\0'))
        return 1; 
    else if((str1[check] == '\0') && (str2[check] != '\0'))
        return -1;
    else if((str1[check] == '\0') && (str2[check] == '\0'))
        return 0;

    while(str1[check] != '\0')
    {
        if( !ft_isascii(str1[check]) || !ft_isascii(str2[check]))
            return 1;
        
        check++;
    }

    while(( cnt < num ) && ((str1[cnt] != '\0' ) && (str2[cnt] != '\0')))
    {
        if((str1[cnt] == str2[cnt]) && (cnt < num))
            cnt++;
        else
        {
            result = ((int)str1[cnt] - (int)str2[cnt]);
            return result;
        }
    }

    return 0;
}