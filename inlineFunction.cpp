#include<iostream>
using namespace std;

class Test{
    public:
        void fun1() //Inline
        {
            cout<<"Inline function"<<endl;
        }
        inline void fun2(); //Inline
        void fun3(); //outline
};
void Test:: fun2(){
    cout<<"Also Inline"<<endl;
}
void Test:: fun3(){
    cout<<"outline"<<endl;
}