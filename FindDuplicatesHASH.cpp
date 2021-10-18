#include<iostream>
using namespace std;

int main(){

    char input[100];
    int hash[26];

    cout<<"Enter String ";
    gets(input);
    puts(input);

    int i=0,j=0;

    for(int j=0;j<=25;j++){
        hash[j]=0;
    }

    while(input[i]!='\0'){
        hash[input[i]-97]+=1;
        if(hash[input[i]-97]==2){
            printf("%c is duplicate\n",input[i]);
        }
        i++;
    }
    



    return 0;
}