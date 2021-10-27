#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};
class Stack{
    private:
        Node *top;
        int size;
        int maxSize;
    public:
        Stack(){
            top=NULL;
            maxSize=10;
            size=0;
        }
        Stack(int size){
            top=NULL;
            maxSize=size;
            this->size=0;
        }

    bool isEmpty(){
        if(top==NULL && size==0){
            return 1;
        }
        return 0;
    }

    bool isFull(){
        if(size==maxSize){
            return 1;
        }
        return 0;
    }

    void push( int element){
        if(isFull()){
            cout<<"____STACK OVERFLOW____"<<endl;
        }
        else{
            size++;
            Node *t=new Node;
            t->data=element;
            t->next=top;
            top=t;
        }
    }
    int pop(){
        if(isEmpty()){
            cout<<"____STACK UNDERFLOW___"<<endl;
        }
        else{
            int prevData;
            size--;
            Node *t=top;
            top=top->next;
            prevData=t->data;
            delete t;
            return prevData;
        }

    }

    int peek(){
        if(isEmpty()){
            cout<<" STACK IS EMPTY"<<endl;
            return -9999999;
        }
        else{
            return top->data;
        }
    }

    void Display(){
        if(isEmpty()){
            cout<<"NO ELEMENT IN STACK"<<endl;
        }
        else{
            Node *p=top;
            while(p){
                cout<<p->data<<" ";
                p=p->next;
            }
            cout<<endl;
        }
    }  
};

int main(){

    Stack st;
    st.push(10);
    st.push(20);
    st.pop();
    st.pop();
    st.push(500);
    st.push(100);
    st.pop();
    
    st.Display();

    return 0;
}
