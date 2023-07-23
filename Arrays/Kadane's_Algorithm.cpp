class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long sum=0,max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(sum<arr[i])
            sum=arr[i];
            if(max<sum) max=sum;
        }
        return max;
    }
};
