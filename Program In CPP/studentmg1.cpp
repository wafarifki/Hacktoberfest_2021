#include <bits/stdc++.h>
#include <conio.h>
#include <fstream>

//using namespace std;

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::fstream;
using std::ios;

class Student{
	private:
		string name, email, course, roll, addr, contactno;
	public:
		void menu();
		void insert();
};

void Student::menu(){
	menustart:
	char c;
	int choice;
		system("cls");
		cout << "\t\t\t---------------------------" << endl;
		cout << "\t\t\t|Student Managament System|" << endl;
		cout << "\t\t\t---------------------------"<<endl;
		
		cout << "\t\t\t1) Enter new Record" << endl;
		cout << "\t\t\t2) Display Record" << endl;
		cout << "\t\t\t3) Modify Record" << endl;
		cout << "\t\t\t4) Search Record" << endl;
		cout << "\t\t\t5) Delete Record" << endl;
		cout << "\t\t\t6)Exit" << endl;
		
		cout << "\t\t\t---------------------------------" << endl;
		cout << "\t\t\t|Enter Your Choice [1/2/3/4/5/6]|" << endl;
		cout << "\t\t\t---------------------------------"<<endl;
		cout << "\t\t\t";
		cin >> choice;
		
		switch(choice){
			case 1: 
			do{
				insert();
				cout << "\t\t\tEnter another student ? [Y/N]\n\t\t\t";
				cin >> c;
			}while( c == 'y' || c == 'Y');
			
					break;
			default: cout << "\t\t\tInvalid Input, please try again.";
			getch();
		}
		goto menustart;
		
		
}

void Student::insert(){
	
	fstream fio;
	system("cls");
	cout << "\t\t\t--------------------------------------------------------------------------" << endl;
	cout << "\t\t\t-----------------------Enter Students Details:----------------------------" << endl;
	cout << "\t\t\t1) Enter name: ";
	cin >> name;
	cout << "\t\t\t1) Enter course: ";
	cin >> course;
	cout << "\t\t\t1) Enter roll no: ";
	cin >> roll;
	cout << "\t\t\t1) Enter email: ";
	cin >> email;
	cout << "\t\t\t1) Enter contact no: ";
	cin >> contactno;
	cout << "\t\t\t1) Enter address: ";
	cin >> addr; 
	
	fio.open("student.txt", ios::app | ios::out);
	fio << name << " " << course << " " << roll << " " << email << " " << addr << " " << contactno << '\n';
	fio.close();
	getch();
}

int main(){ 

	
	Student s;
	s.menu();

	return 0;
}
