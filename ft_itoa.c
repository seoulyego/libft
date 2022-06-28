/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:29:09 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/18 03:40:18 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static unsigned int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-1 * nbr);
	return (nbr);
}

static size_t	check_digits(unsigned int abs_nbr)
{
	if (abs_nbr < 10)
		return (1);
	return (1 + check_digits(abs_nbr / 10));
}

char	*ft_itoa(int n)
{
	unsigned int	abs_n;
	char			*result;
	size_t			m_size;

	abs_n = ft_abs(n);
	m_size = check_digits(abs_n);
	if (n < 0)
		m_size += 1;
	result = malloc(sizeof(char) * (m_size + 1));
	if (result == NULL)
		return (NULL);
	result[m_size] = '\0';
	while (m_size > 0)
	{
		result[m_size - 1] = abs_n % 10 + '0';
		abs_n /= 10;
		m_size--;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
