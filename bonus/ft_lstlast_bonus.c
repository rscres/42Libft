/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:38:38 by rseelaen          #+#    #+#             */
/*   Updated: 2023/05/08 13:07:50 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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

int	ft_lstsize(t_list *lst)
{
	int	size;

	if (!lst)
		return (0);
	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (!lst)
		return (NULL);
	while (current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}

int main()
{
    // Create a linked list with three nodes
    t_list *head = ft_lstnew("node 1");
    ft_lstadd_front(&head, ft_lstnew("node 2"));
    ft_lstadd_front(&head, ft_lstnew("node 3"));

    // Add a new node to the front of the list using ft_lstadd_front
    ft_lstadd_front(&head, ft_lstnew("new node"));

    // Verify that the new node has been added to the front of the list
    t_list *current = head;
	int i = 1;
    while (current != NULL)
    {
        printf("%d: %s\n", i++, (char *)current->content);
        current = current->next;
    }
	printf("%d\n", ft_lstsize(head));
	t_list *last = ft_lstlast(head);
	printf("%s\n", (char *)last->content);
    return 0;
}