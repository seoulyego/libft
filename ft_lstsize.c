/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:30:05 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/17 20:08:44 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*cur;
	int		count;

	if (lst == NULL)
		return (0);
	cur = lst;
	count = 0;
	while (cur != NULL)
	{
		count++;
		cur = cur->next;
	}
	return (count);
}
