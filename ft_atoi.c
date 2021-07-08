
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:55:25 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/06/23 12:55:51 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_checkStart(const char *str)
{
    int i;

    i = 0;
    while(1)
    {
        if(( str[i] == ' ' ) || ( str[i] == '\n' ))
            i++;
        else if((str[i] == '\v') || (str[i] == '\t') || (str[i] == '\f'))
            i++;
        else
            return i;    
            
    }
    return i;
}

int ft_atoi(const char *str)
{
    int index;
    int result;
    int negativ;
    int l_str;

    result = 0;
    negativ = 1;
    l_str = ft_strlen(str);
    index = ft_checkStart(str);

    while(index < l_str)
    {
        if(str[index] == '-' && ft_isdigit(str[index + 1]))
        {
            negativ = -1;
        }
        if(str[index] == '+')
        {
            negativ = 1;
        }
        if((str[index] != '\0') && ft_isdigit(str[index]))
        {
            result = result * 10 + (str[index] - '0');        
        }
        if((str[index] == '-') && (!ft_isdigit(str[index +1 ])))
            break;
        if((str[index] == '+') && (!ft_isdigit(str[index + 1])))
            break;
        if((str[index] == '\e') && (ft_isdigit(str[index + 1])))
            break;
        index++;
    }
    result = result * negativ;
    return result;
        
}