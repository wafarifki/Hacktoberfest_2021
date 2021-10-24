#include<stdio.h>
#include<stdlib.h>
typedef struct List{
    int data;
    struct List *next;
}Node;
Node *head=NULL;
void enqueue(int ele){
    Node *x=(Node*)malloc(sizeof(Node)),*temp=head;
    x->data=ele;
    x->next=NULL;
    if(head==NULL){
        head=x;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=x;

}
int dequeue(){
    int n;
    Node *x;
    if(head==NULL){
        return -1;
    }
    n=head->data;
    x=head;
    head=head->next;
    x->next=NULL;
    free(x);
    return n;
}    
void display(){
    Node *temp=head;
     if(head==NULL){
        printf("\n UNDERFLOW CONDITION");
        return;
    }
    printf("\n");
    while(temp!=NULL){
        printf("%d --> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
int main(){
    enqueue(1);
    display();
    enqueue(2);
    display();
    enqueue(3);
    display();
    printf("\n Element Deleted :%d",dequeue());
    display();
    
    return 0;
}