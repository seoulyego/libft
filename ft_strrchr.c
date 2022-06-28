/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:23:36 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/18 00:31:30 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp_s;
	char	tmp_c;

	tmp_s = (char *)s;
	tmp_c = (char)c;
	while (*tmp_s)
		tmp_s++;
	if (tmp_c == '\0')
		return (tmp_s);
	while (tmp_s != s)
	{
		tmp_s--;
		if (*tmp_s == tmp_c)
			return (tmp_s);
	}
	return (NULL);
}
