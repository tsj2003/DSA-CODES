/****************************************************************
 
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

Node *appendLastNToFirst(Node *head, int n) {
    if (head == nullptr || n == 0) {
        return head; 
    }

    
    Node *temp = head;
    int count = 0;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }

   
    if (n >= count) {
        return head;
    }

    
    int splitPoint = count - n;
    temp = head;
    for (int i = 1; i < splitPoint; i++) {
        temp = temp->next; 
    }

    Node *newHead = temp->next; 
    temp->next = nullptr;      

    
    Node *current = newHead;
    while (current->next != nullptr) {
        current = current->next; 
    }
    current->next = head; 

    return newHead; 
}
