#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

typedef struct {
    double bilanganSatu;
    double bilanganDua;
} pertambahan;

pertambahan data[1];

void hasilPertambahan()
{
    data[0].bilanganSatu = 5;
    data[0].bilanganDua = 6;

    cout<<"Hasil Dari bilanganSatu + bilanganDua = "<<data[0].bilanganSatu + data[0].bilanganDua<<endl;
}

int main() 
{
    system("COLOR FD");
    hasilPertambahan()
}

