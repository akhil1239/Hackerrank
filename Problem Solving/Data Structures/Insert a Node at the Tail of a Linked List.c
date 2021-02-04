SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *x=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode*));
    SinglyLinkedListNode *t=head;
    x->data=data;
    x->next=NULL;
    if(head==NULL){
        head=x;
        return (head);
    }
    else
        
        while(t->next!=NULL){
            t=t->next;}
        t->next=x; 
    return (head);
}
