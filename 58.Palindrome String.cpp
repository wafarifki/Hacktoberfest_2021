int isPalindrome(string S)
	{
	    int flag=0;
        for(int i=0,j=S.size()-1;i<j;i++,j--){
            if(S[i]!=S[j]){
                flag=1;
                break;
            }
            
        }
    return flag==0?1:0;
	}