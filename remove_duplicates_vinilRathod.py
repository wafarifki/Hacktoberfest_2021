class Solution:
    def removeDuplicate(self, A, N):
        count={i:0 for i in A}
        temp=[]
        for i in A:
            if count[i]==0:
                temp.append(i)
                count[i]=1
        return temp
t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    ob=Solution()
    arr=ob.remove_duplicate(a,n)
    print(arr)
