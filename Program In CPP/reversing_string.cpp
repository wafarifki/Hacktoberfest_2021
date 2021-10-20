#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char text[] = "AnishGhimire";

    int nChars = sizeof(text) -1 ;

    char *pStart = text;
    char *pEnd = text + nChars - 1;
    // cout << *pStart << endl;
    // cout << *pEnd;
    while (pStart < pEnd) 
    {
        char temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;
        pStart++;
        pEnd--;       

    }
    
    cout << text << endl;
    return 0;
}