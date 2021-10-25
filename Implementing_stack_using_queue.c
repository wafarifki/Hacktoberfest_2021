#include<stdio.h>
#include<stdlib.h>
#define MAX 20

typedef struct{
    int data[MAX];
    int front;
    int rear;
}Queue;

Queue q1;

int insert(Queue *q, int v){
    if(q->rear == MAX-1){    //full Q
        printf("Queue is full\n");
        return 1;
    }
    if(q->rear == -1){   //Empty Q
        q->front = q->rear = 0;
        q->data[q->rear] = v;
    }else{   //Partially full Q
        q->rear++;
        q->data[q->rear] = v;
    }
    return 0;
}

int delete(Queue *q, int *m){
    if(q->front == -1){   //Empty Q
        printf("Q is empty\n");
        return 1;
    }
    if(q->front == q->rear){
        *m = q->data[q->front];
        q->front = q->rear = -1;
    }else{
        *m = q->data[q->front];
        q->front++;
    }
    return 0;
}

int delete2(Queue *q, int *m){
    if(q->front == -1){
        printf("Q is empty\n");
        return 1;
    }
    if(q->front == q->rear){
        *m = q->data[q->front];
        q->front = q->rear = -1;
    }else{
        *m = q->data[q->front];
        for(int i=1; i<q->rear; i++){
            q->data[i-1] = q->data[i];
        }
        q->rear--;
    }
    return 0;
}

void display(Queue q){
    int i;
    if (q.front == - 1)
        printf("Queue is empty \n");
    else{
        for (i = q.front; i <= q.rear; i++)
            printf("%d ", q.data[i]);
        printf("\n");
    }
}

int isEmpty(Queue q){
    return (q.front == -1) ? 1 : 0;
}

int push(int v){
    return insert(&q1, v);
}

int pop(int *m){
    int p = isEmpty(q1);
    if(p) return p;
    int i = q1.front;
    int j = q1.rear;
    while(i!=j){
        int n;
        delete(&q1, &n);
        insert(&q1, n);
        i++;
    }
    int n;
    delete(&q1, &n);
    *m = n;
    return 0;
}

int main(){
    q1.front = q1.rear = -1;
    int t = push(10);
    display(q1);
    t = push(20);
    display(q1);
    t = push(30);
    display(q1);
    int m;
    int r = pop(&m);
    display(q1);
    return 0;
}
