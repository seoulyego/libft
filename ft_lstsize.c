/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:30:05 by yeongo            #+#    #+#             */
/*   Updated: 2022/07/07 15:51:07 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*cur;
	int		size;

	if (lst == NULL)
		return (0);
	cur = lst;
	size = 0;
	while (cur != NULL)
	{
		size++;
		cur = cur->next;
	}
	return (size);
}
