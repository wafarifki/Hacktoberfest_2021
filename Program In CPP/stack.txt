#include<iostream>
#define MAX 10
using namespace std;
template<class T>
class Stack
{
    T data[MAX];
    T initial;
    int count;
    public:
    Stack(T initial)
    {
        count = 0;
        this->initial = initial;
        for(int i=0;i<MAX;i++)
        {
            data[i] = initial;
        }
    }
    void print()
    {
        for(int i=0;i<count;i++)
        {
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
    void push(T item)
    {
        if(count == 3)
        {
            return;
        }
        data[count] = item;
        count++;
    }
    void pop()
    {
        if(count>0)
        {
            data[count] = initial;
            count--;
        }
    }
};

int main()
{
    Stack<int> s(1);
    Stack<char> c('i');
    s.push(1);
    s.push(2);
    c.push('a');
    c.push('b');
    cout<<"The pushed stack:"<<endl;
    s.print();
    c.print();
    s.pop();
    c.pop();
    cout<<"The popped stack:"<<endl;
    s.print();
    c.print();
    return 0;
}
