
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
int findNodeRec(Node* head, int n) {
    if (head == NULL) 
        return -1; // Element not found
    if (head->data == n) 
        return 0; // Found at current position

    int indexInRest = findNodeRec(head->next, n); // Recursive call on the rest of the list
    if (indexInRest == -1) 
        return -1; // If not found in the rest, return -1

    return indexInRest + 1; // Increment the index for each level of recursion
}
