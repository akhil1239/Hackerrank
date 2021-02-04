SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* x=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    x->data=data;
    x->next=NULL;
    SinglyLinkedListNode* t=llist;
    if(llist==NULL){
        llist=x;
    }
    else{
        t=llist;
        x->next=t;
        llist=x;
    }
    return (llist);
}
