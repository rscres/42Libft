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