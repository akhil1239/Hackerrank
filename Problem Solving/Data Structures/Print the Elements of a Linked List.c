void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *t=head;
    while(t!=NULL){
        printf("%d\n",t->data);
        t=t->next;
    }
}
