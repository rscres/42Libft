/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:09:58 by rseelaen          #+#    #+#             */
/*   Updated: 2023/05/08 17:13:41 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

t_list	*ft_lstnew(void *content)
{
	t_list			*node;

	node = malloc(sizeof(t_list));
	node->content = malloc(strlen(content) * sizeof(char));
	node->content = content;
	node->next = NULL;
	return (node);
}


int main()
{
    // Create a linked list with three nodes
    t_list *head = ft_lstnew("node 1");
    ft_lstadd_front(&head, ft_lstnew("node 2"));
    ft_lstadd_front(&head, ft_lstnew("node 3"));

    // Add a new node to the front of the list using ft_lstadd_front
    ft_lstadd_front(&head, ft_lstnew("new node"));

	//Add new node to the end of the list
	ft_lstadd_back(&head, ft_lstnew("back node"));

    // Verify that the new node has been added to the front of the list
    t_list *current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
	// printf("%d\n", ft_lstsize(head));
	// t_list *last = ft_lstlast(head);
	// printf("%s\n", (char *)last->content);
    return 0;
}