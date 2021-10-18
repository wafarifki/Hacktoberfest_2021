int convertFive(int n)
    {
    //Your code here
        int temp=0;
        while(n>0){
            if((n%10)==0)
                temp=temp*10+ 5;
            else
                temp=temp*10+n%10;
            n/=10;
        }
        int ans=0;
        while(temp>0){
            ans=ans*10+temp%10;
            temp=temp/10;
        }
        return ans;
    }