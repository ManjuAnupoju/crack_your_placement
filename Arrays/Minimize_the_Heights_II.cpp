class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        if(n==1) return 0;
        int diff=arr[n-1]-arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]-k<0) continue;
            
            int ma=max(arr[n-1]-k,arr[i-1]+k);
            int mi=min(arr[0]+k,arr[i]-k);
            if(diff>ma-mi) diff=ma-mi;
        }
        return diff;
    }
};
