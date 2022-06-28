/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:47:49 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/18 03:40:08 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tmp;
	int		m_size;

	m_size = count * size;
	tmp = malloc(m_size);
	if (tmp == NULL)
		return (NULL);
	ft_memset(tmp, 0, m_size);
	return (tmp);
}
