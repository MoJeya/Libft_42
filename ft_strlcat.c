
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 13:56:10 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/06/21 15:23:05 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char * dst, const char *src, size_t dstsize)
{
  unsigned long l_dst;
  unsigned long srcSize;
  unsigned long size;
  unsigned long cnt;
  unsigned long cnt2;

  l_dst = ft_strlen(dst);
  srcSize = ft_strlen(src);

  size = l_dst + srcSize;
  cnt2 = 0;
  if((dst == 0) && (src == 0))
    return 0;
  if(dstsize < (l_dst + 1))
    return (srcSize + dstsize); 

  cnt = l_dst;
  while((src[cnt2] != '\0') && (cnt < (dstsize - 1)))
  {
      dst[cnt] = src[cnt2];
      cnt2++;
      cnt++;
  }

  dst[size] = '\0';
  return size;    
}