/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:02:12 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/18 03:11:15 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp_dst;
	const char	*tmp_src;

	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		tmp_dst = (char *)dst;
		tmp_src = (const char *)src;
		while (len--)
			*(tmp_dst + len) = *(tmp_src + len);
	}
	return (dst);
}
