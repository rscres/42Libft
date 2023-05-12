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