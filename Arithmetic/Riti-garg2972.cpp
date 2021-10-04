#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)                           
    {
        int ele=arr[i];
         for(int j=0;j<i;j++)                          
         {
            if(arr[j]>ele)
            {     int k=i;
                  while(k>j)
                  {
                      arr[k]=arr[k-1];
                      k--;
                  }
                  arr[k]=ele;
                break;
            }   
         } 
       
    }
}
int main()
{
    int n,i;                                                 
    cout<<"enter number of elements\n ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
       cin>>a[i]; 
    }
    insertionsort(a,n);
    cout<<endl;
    for(i=0;i<n;i++)
    {
       cout<<a[i]<<" "; 
    }
    return 0;
}