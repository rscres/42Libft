// Create a function to print an integer
void print_int(void *content) {
    printf("%d ", *(int*)content);
}

// Create a function to create a new node with the given data
t_list *create_node(int data) {
    t_list *new_node = malloc(sizeof(t_list));
    if (new_node == NULL) {
        return NULL;
    }
    int *new_data = malloc(sizeof(int));
    if (new_data == NULL) {
        free(new_node);
        return NULL;
    }
    *new_data = data;
    new_node->content = new_data;
    new_node->next = NULL;
    return new_node;
}

// Create a function to add a new node to the end of the list
void add_node(t_list **head, int data) {
    t_list *new_node = create_node(data);
    if (new_node == NULL) {
        printf("Error: could not create new node\n");
        return;
    }
    if (*head == NULL) {
        *head = new_node;
    } else {
        t_list *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

// Create a function to test ft_lstiter
void test_ft_lstiter() {
    t_list *head = NULL;
    int data1 = 1, data2 = 2, data3 = 3;
    add_node(&head, data1);
    add_node(&head, data2);
    add_node(&head, data3);

    printf("List contents: ");
    ft_lstiter(head, print_int);
    printf("\n");
}

int main() {
    test_ft_lstiter();
    return 0;
}