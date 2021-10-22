#include <iostream>
using namespace std;

//Defining Class
class Complex{

	//Declaration of private data members
private:
 double real,imag;

//Declaration of public methods
public:
 //Declaration of Constructor
 Complex(){
  real=imag=0;
 }

 Complex(double r){
  real=r;
  imag=0;
 }


 Complex(double r, double i){
  real=r;
  imag=i;
 }


 Complex(Complex &obj){
  real=obj.real;
  imag=obj.imag;
 }
   //Declaration of method for Addition
 Complex add(Complex c){
        Complex Add;
  Add.real = real + c.real;
  Add.imag = imag + c.imag;
        return Add;
 }

 //Declaration of method for Subtraction
 Complex sub(Complex c){
  Complex Sub;
  Sub.real = real - c.real;
  Sub.imag = imag - c.imag;
  return Sub;
 }

 //Declaration of method for Multiplication
 Complex mult(Complex c){
        Complex Mult;
  Mult.real = real*c.real - imag*c.imag;
  Mult.imag = real*c.imag - c.real*imag;
  return Mult;
 }

 //Declaration of method for Division
 Complex div(Complex c){
  Complex Div;
  Div.real = (real*c.real + imag*c.imag)/(c.real*c.real + c.imag*c.imag);
  Div.imag = (imag*c.real + real*c.imag)/(c.real*c.real + c.imag*c.imag);
  return Div;
 }

//Printing the Complete Complex no.
 void print(){
        cout<<real<<"+"<<imag<<"i"<<endl<<endl;
 }


 double getReal() const{
  return real;
 }


 double getImag() const{
  return imag;
 }


 void setReal(double re){
  real = re;

 }


 void setImag(double im){
        imag = im;
 }


};

//Main Function
int main()
{
 double real1,imag1,real2,imag2;
 int choice;

 //Input for 1st real part
 cout<<"Enter the Real  part of First Number: ";
    cin>>real1;
 //Input for 1st Imaginary part
 cout<<"Enter the imaginary  part of First Number: ";
 cin>>imag1;

 //Object creation
    Complex obj1(real1,imag1);
 obj1.print();

 //Input for 2nd real part
 cout<<"Enter the Real part of Second Number: ";
 cin>>real2;
 //Input for 2nd Imaginary part
 cout<<"Enter the Imaginary part of second number: ";
    cin>>imag2;

//Object creation
    Complex obj2(real2,imag2);
 obj2.print();

 //Switch cases
do{

 Complex c;
 cout<<"---CHOICES---"<<endl;
	cout<<"1.ADD"<<endl;
	cout<<"2.SUBTRACT"<<endl;
	cout<<"3.MULTIPY"<<endl;
	cout<<"4.DIVIDE"<<endl;
	cout<<"5.EXIT"<<endl;
 cout<<"Enter ur choice"<<endl;
 cin>>choice;
 switch(choice)
 {
 	 case 1:  //to add
 	 	 c= obj1.add(obj2);
		 cout<<"Addition is : ("<<c.getReal()<<")+("<<c.getImag()<<")i\n"<<endl;
		 break;

 	 case 2:  //to subtract
		 c= obj1.sub(obj2);
		 cout<<endl<<"Subtraction is : ("<<c.getReal()<<")+("<<c.getImag()<<")i\n"<<endl;
		 break;

 	 case 3:  //to multiply
 		 c= obj1.mult(obj2);
		 cout<<endl<<"Multiplication is : ("<<c.getReal()<<")+("<<c.getImag()<<")i\n"<<endl;
		 break;

 	 case 4:   //to divide
		 c= obj1.div(obj2);
		 cout<<endl<<"Division result  is : ("<<c.getReal()<<")+("<<c.getImag()<<")i\n"<<endl;
		 break;

 	 case 5:  //to exit
 		 exit(1);

 	 default:cout<<"Enter valid no. from 1 to 5\n"<<endl;
 }
}while(choice!=5);
 return 0;
}
