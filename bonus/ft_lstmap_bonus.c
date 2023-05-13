/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:18:10 by rseelaen          #+#    #+#             */
/*   Updated: 2023/05/12 21:55:37 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list			*node;

	node = malloc(sizeof(t_list));
	node->content = malloc(strlen(content) * sizeof(char));
	node->content = content;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	if (!new)
		return ;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->next = NULL;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*head;

	if (!lst || !del || !f)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		return (NULL);
	head = new_lst;
	lst = lst->next;
	while (lst)
	{
		new_lst->next = ft_lstnew(f(lst->content));
		new_lst = new_lst->next;
		if (!new_lst)
		{
			del(new_lst->content);
			return (NULL);
		}
		lst = lst->next;
	}
	return (head);
}
