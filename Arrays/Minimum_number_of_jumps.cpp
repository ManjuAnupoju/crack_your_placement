class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int mr=0,max=0,jumps=0;
        if(arr[0]==0) return -1;
        for(int i=0;i<n;i++)
        {
            if(max<(i+arr[i])) {
                max=i+arr[i];
            }
            if(i==mr) {
                mr=max;
                jumps++;
            }
            if(mr>=n-1) return jumps;
        }
        return -1;
    }
};
