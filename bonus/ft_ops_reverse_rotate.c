/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ops_reverse_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:32:20 by sabrifer          #+#    #+#             */
/*   Updated: 2024/08/28 18:54:14 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	reverse_rotate(t_list **lst)
{
	t_list	*temp;
	t_list	*previous_head;
	t_list	*last_node;

	if (*lst == NULL || (*lst)-> next == NULL)
		return ;
	temp = *lst;
	previous_head = *lst;
	last_node = *lst;
	while (last_node -> next -> next != NULL)
		last_node = last_node -> next;
	while (temp -> next != NULL)
		temp = temp -> next;
	temp -> next = previous_head;
	last_node -> next = NULL;
	*lst = temp;
}

void	rra(t_list **lst)
{
	reverse_rotate(lst);
}

void	rrb(t_list **lst)
{
	reverse_rotate(lst);
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
}
