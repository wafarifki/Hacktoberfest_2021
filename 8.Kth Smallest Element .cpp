int kthSmallest(int arr[], int l, int r, int k) {
        sort(arr,arr+r+1);  //O(nlogn) complexity
        return arr[k-1];
    }


