/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:02:46 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/20 17:33:18 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		length;
	char	*result;

	length = ft_strlen(s1);
	result = malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, length + 1);
	return (result);
}
