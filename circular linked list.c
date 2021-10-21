#include<stdio.h>
#include<stdlib.h>
    struct Node{
    int data;
    struct Node * next;
 };
  void CircularlinkedListTraversal(struct Node *head){
      struct Node *p=head;
      do{
          printf("Element :%d\n",p->data);
          p= p->next;
      }while(p!=head);
  }
  struct Node * insertAtFirst(struct Node *head,int data){
      struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
      ptr->data=data;
     struct Node * p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
  }
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    head =(struct Node *)malloc(sizeof(struct Node));
    second =(struct Node *)malloc(sizeof(struct Node));
    third =(struct Node *)malloc(sizeof(struct Node));
    forth =(struct Node *)malloc(sizeof(struct Node));

    head ->data =4;
    head -> next =second;

     second ->data =3;
    second -> next =third;

     third ->data =6;
    third -> next =forth;

     forth ->data =1;
    forth -> next =head;

    CircularlinkedListTraversal(head);
    head=insertAtFirst(head,23);
    CircularlinkedListTraversal(head);
    
    return 0;
}
