Node* mergeTwoSortedLinkedLists(Node* head1, Node* head2) {
    // If one list is empty, return the other
    if (head1 == NULL) {
        return head2;
    }
    if (head2 == NULL) {
        return head1;
    }

    // Initialize pointers for the new merged list
    Node* newHead = NULL;
    Node* currentNode = NULL;

    // Determine the initial head of the merged list
    if (head1->data < head2->data) {
        newHead = head1;
        head1 = head1->next;
    } else {
        newHead = head2;
        head2 = head2->next;
    }

    // Maintain a reference to the current node in the merged list
    currentNode = newHead;

    // Traverse both lists and merge them
    while (head1 != NULL && head2 != NULL) {
        if (head1->data < head2->data) {
            currentNode->next = head1;
            head1 = head1->next;
        } else {
            currentNode->next = head2;
            head2 = head2->next;
        }
        currentNode = currentNode->next; // Move to the next node
    }

    // Append the remaining elements from either list
    if (head1 != NULL) {
        currentNode->next = head1;
    } else if (head2 != NULL) {
        currentNode->next = head2;
    }

    return newHead;
}
