class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
    Node *newnode = new Node(x);
    if(head ==NULL){
            return newnode;
    }
       newnode->next = head;
        return newnode;
}

    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
    Node *newnode = new Node(x);        
    if(head ==NULL) {
            return newnode;
        }
        else{
            Node *curr = head;
            while(curr->next!=NULL)
                curr = curr->next;
           curr->next = newnode;
            newnode->next = NULL;
        }
       return head;
    }
	//code here
};
