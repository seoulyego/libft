/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:13:05 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/18 03:28:14 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*tmp_haystack;
	size_t	tmp_len;
	int		idx_haystack;
	int		idx_needle;

	tmp_haystack = (char *)haystack;
	if (!needle)
		return (tmp_haystack);
	idx_haystack = 0;
	while (tmp_haystack[idx_haystack])
	{
		tmp_len = 0;
		idx_needle = 0;
		while (tmp_haystack[idx_haystack + idx_needle] == \
				needle[idx_needle] && tmp_len++ < len)
		{
			if (!needle[idx_needle])
				return (&tmp_haystack[idx_haystack]);
			idx_needle++;
		}
		idx_haystack++;
	}
	return (NULL);
}
