int *findTwoElement(int *arr, int n) {
        int *ans=new int[2];
        int i=0;
        while(i<n){
            int correctIndex=arr[i]-1;
        
            if(arr[i]==arr[correctIndex] && i!=correctIndex){
                ans[0]=arr[i];
                i++;
                continue;
            }
            else if(arr[i]!=arr[correctIndex]){
                int temp=arr[i];
                arr[i]=arr[correctIndex];
                arr[correctIndex]=temp;
            }
            else
                i++;
        }
        for(int j=1;j<=n;j++){
            if(j!=arr[j-1]){
                ans[1]=j;
                break;}
        }
        
       return ans;

    }