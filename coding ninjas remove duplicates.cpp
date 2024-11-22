Node *removeDuplicates(Node *head)
{
    if (head == nullptr || head->next == nullptr) {
        return head; // If the list is empty or has only one node
    }

    Node *current = head; // Pointer to traverse the list
    Node *nextNode = head->next; // Pointer to check the next unique node

    while (nextNode != nullptr) {
        if (current->data != nextNode->data) {
            current->next = nextNode; // Link to the unique node
            current = current->next; // Move to the next unique node
        }
        nextNode = nextNode->next; // Move the `nextNode` pointer
    }

    current->next = nullptr; // Ensure the last node points to null
    return head;
}
