#include <iostream>

using namespace std;

int main(){
	
	int x,y,i, hasil;
	
	cout << "Masukkan angka : ";
	cin >> x;
	cout << "Masukkan pangkat : ";
	cin >> y;
	
	
	if(y > 0){
		i = 1;
		while(!(i > y)){
			hasil = hasil*x;
			i = i + 1;
		}
		cout << "hasil = " << hasil << endl;
	}else if(y == 0){
		hasil = 0;
		cout << "hasil = " << hasil << endl;
	}
	
	return 0;
}
