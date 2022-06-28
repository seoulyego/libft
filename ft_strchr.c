/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:23:36 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/17 20:09:47 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp_s;
	char	tmp_c;

	tmp_s = (char *)s;
	tmp_c = (char)c;
	while (*tmp_s)
	{
		if (*tmp_s == tmp_c)
			return (tmp_s);
		tmp_s++;
	}
	if (tmp_c == '\0')
		return (tmp_s);
	return (NULL);
}
