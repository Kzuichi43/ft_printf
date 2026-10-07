/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:20:26 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/02 10:33:08 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;
	t_list			*temp;

	if (!lst)
		return (0);
	temp = lst;
	i = 0;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
