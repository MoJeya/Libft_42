/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:25:43 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/06 13:51:36 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_findW_cnt(char const *s, char c)
{
    int i;
    size_t cnt;
    
    i = 0;
    cnt = 0;
    while(s[i] != '\0')
    {
        if (s[i] == c)
            i++;
        else if (s[i] != c)
        {
            cnt++;
            while (s[i] != '\0' && s[i] != c)
                i++;
        }    
    }
    return cnt;
}

static int ft_cnt(int cnt , char const *str, char c)
{
    int i;

    i = cnt;
    while ((str[i] == c) && (str[i] != '\0'))
    {
        i++;
    }
    cnt = i;
    return cnt;
}

static int ft_cnt_toNext(int cnt, char const *str, char c)
{
    int i;

    i = cnt;
    while((str[i] != c) && (str[i] != '\0'))
    {
        i++;
    }
    cnt = i;
    return cnt;
    
}

char **ft_split(char const *s, char c)
{
    char    **result;
    size_t  index;
    size_t  index_2;
    int     i;
    
    if(!s)
        return NULL;
    index = 0;
    i = 0;
    result = (char **)malloc((ft_findW_cnt(s,c) + 1) * sizeof(char *));
    if(!result)
        return NULL;
    while(i < (int)ft_findW_cnt(s,c) && ft_findW_cnt(s,c) != 0)
    {
        index = ft_cnt(index,s,c);
        index_2 = index;
        index_2 = ft_cnt_toNext(index_2, s, c);
        result[i] = (char *)malloc(sizeof(char) * (index_2 - index + 1));
        if(!result[i])
            return NULL;
        result[i] = ft_substr(s, index, index_2 - index);
        i++;
        index = index_2;        
    }
    result[i] = NULL;
    return result;
}
