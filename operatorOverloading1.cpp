#include<iostream>
using namespace std;

class Complex{
    public:
        int real;
        int img;
    public:
        
        Complex(int real=0,int img=0){
            this->img=img;
            this->real=real;
        }

        Complex operator+(Complex x){
            Complex temp;
            temp.real=real+x.real;
            temp.img=img+x.img;
            return temp;
        }

};

int main(){

    Complex C1(3,2);
    Complex C2(9,11);
    Complex C3;

    C3=C1+C2;
    cout<<C3.real<<"+"<<C3.img<<"i"<<endl;



    return 0;
}