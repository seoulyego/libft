/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:36:11 by yeongo            #+#    #+#             */
/*   Updated: 2022/07/07 16:27:57 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src = (const unsigned char *)src;

	if (dst == NULL && src == NULL)
		return (NULL);
	tmp_dst = (unsigned char *)dst;
	while (n--)
		*tmp_dst++ = *tmp_src++;
	return (dst);
}
