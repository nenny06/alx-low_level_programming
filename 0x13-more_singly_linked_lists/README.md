0. Print list
size_t print_listint(const listint_t *h);

1. List length
size_t listint_len(const listint_t *h);

2. Add node
 a function that adds a new node at the beginning of a listint_t list.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);

3. Add node at the end
a function that adds a new node at the end of a listint_t list.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);

4. Free list
a function that frees a listint_t list.
Prototype: void free_listint(listint_t *head);

5. Free
 a function that frees a listint_t list.
Prototype: void free_listint2(listint_t **head);

6. Pop
 a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
Prototype: int pop_listint(listint_t **head);

7. Get node at index
 a function that returns the nth node of a listint_t linked list.
Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

8. Sum list
a function that returns the sum of all the data (n) of a listint_t linked list.
Prototype: int sum_listint(listint_t *head);

9. Insert
 a function that inserts a new node at a given position.
Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
where idx is the index of the list where

10. Delete at index
a function that deletes the node at index index of a listint_t linked list.
Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
