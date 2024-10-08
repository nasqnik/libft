/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikitin <anikitin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:37:12 by anikitin          #+#    #+#             */
/*   Updated: 2024/07/10 13:01:49 by anikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns the last node of the list
lst: The beginning of the list.
Return: Last node of the list
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
