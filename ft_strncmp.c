/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:36:27 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/18 03:24:12 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	if (n == 0)
		return (0);
	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	while (*tmp_s1 && *tmp_s2 && *tmp_s1 == *tmp_s2 && n--)
	{
		tmp_s1++;
		tmp_s2++;
	}
	if (n == 0)
	{
		tmp_s1--;
		tmp_s2--;
	}
	return (*tmp_s1 - *tmp_s2);
}
