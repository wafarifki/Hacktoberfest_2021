#include<iostream>
using namespace std;

class Book{
    public:
        string name;
        int price;
    public:
        Book(){}

        Book(string name,int price){
            this->name=name;
            this->price=price;
        }
};

class BookCompare{

    public:
        bool operator()(Book A,Book B){
            if(A.name==B.name){
                return true;
            }
            return false;
        }
};



int main(){
    Book b1("C++",100);
    Book b2("Python",150);
    Book b3("Java",200);
    Book b4("C++",200);

    BookCompare cmp;

    if(cmp(b1,b2)){
        cout<<"Book Found"<<endl;
    }
    else
        cout<<"Book Not found"<<endl;
    
    return 0;

}