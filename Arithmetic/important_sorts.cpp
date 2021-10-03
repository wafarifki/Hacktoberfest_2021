#include<iostream>
#include<math.h>
using namespace std;

struct node{
	int data;
	node* next;
	node(int key)
	:data(key)
	{
		next=NULL;
	}
};

void bubblesort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int flag=0;
		for (int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				flag++;
			}
		}
		if(flag==0) break;

	}
}

void insertionsort(int arr[],int n){
	for(int i=1;i<n;i++){
		int j=i-1;
		int val=arr[i];
		while(j>=0 && arr[j]>val){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=val;
	}
}

void selectionsort(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(arr[i]>arr[j])
				swap(arr[i],arr[j]);
		}
	}
}

//quicksort
int partition(int arr[],int start,int end){
	int pivot=arr[start];
	int i=start;
	int j=end;
	while(i<j){
		 do{i++;}while( i<end && arr[i]<=pivot);
	     do{j--;}while(j>=0 && arr[j]>pivot);
		if(i<j)
			swap(arr[i],arr[j]);
	}

	swap(arr[start],arr[j]);
	return j;
}

void quicksort(int arr[],int start,int end){

	if(start<end){
		int j=partition(arr,start,end);
		quicksort(arr,start,j);
		quicksort(arr,j+1,end);
	}
}

//merge sort

void merge(int arr[],int low,int mid,int high){
	int i=low;
	int j=mid+1;
	int k=low;
	int b[high+1];

	while(i<=mid && j<=high){
		if(arr[i]<arr[j])
			b[k++]=arr[i++];
		else
			b[k++]=arr[j++];
	}
	for(;i<=mid;i++){
		b[k++]=arr[i];
	}
	for(;j<=high;j++){
		b[k++]=arr[j];
	}

	for(int i=low;i<=high;i++){
		arr[i]=b[i];
	}
}

void iterativemergesort(int arr[],int low,int high){
	int i=low;
	int p;
	for( p=2;p<=high;p*=2){
		for(int i=0;i+p-1<=high;i+=p){
			int low=i;
			int j=i+p-1;
			int mid=(low+j)/2;
			merge(arr,low,mid,j);
		}
	}
	if(p/2<high){
		merge(arr,0,(p/2)-1,high);
	}
}

void recursivemergesort(int arr[],int low, int high){
	if(low<high){
		int mid=(low+high)/2;
		recursivemergesort(arr,low,mid);
		recursivemergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}

}

void insert(node* &head,int key){
	node* temp=new node(key);
	if(!head){
		head=temp;
	}
	else{
		node *t=head;
		while(t->next)
			t=t->next;
		t->next=temp;
	}

}
/*
	Time complexity: O(n)
	Space complexity: largest element .
*/
void binsort(int arr[],int n){
	node **bin = new node*[10];

	for(int i=0;i<10;i++)
		bin[i]=NULL;

	for(int i=0;i<n;i++){
		insert(bin[arr[i]],arr[i]);
	}

	int k=0;
	for(int i=0;i<10;i++){
		node* t=bin[i];
		while(t!=NULL){
			arr[k++]=t->data;
			t=t->next;
		}
	}
}

/*
	
*/
int largestNumber(int arr[],int n){
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1])
			swap(arr[i],arr[i+1]);
	}
	return arr[n-1];
}
void radixsort(int arr[],int n){
	int num=largestNumber(arr,n);
	node **bin= new node*[10];  //10 sufficient for decimal numbers
	int digits=0;
	while(num!=0){
		num/=10;
		digits++;
	}

	for(int i=0;i<10;i++)
		bin[i]=NULL;
	
	for(int i=0;i<digits;i++){
		
		for(int j=0;j<n;j++){
			int index= arr[j]/pow(10,i);
		    index%=10;
			insert(bin[index],arr[j]);
		}


		int k=0;
		for(int j=0;j<10;j++){
			node *t=bin[j];
			while(t){
				arr[k++]=t->data;
				t=t->next;
			}
		}


		for(int i=0;i<10;i++)
			bin[i]=NULL;

	}

	
}
int main(){
	int arr[]={9,8,7,6,5,4,3,2,1,0},n=10;

	quicksort(arr,0,n);

	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}