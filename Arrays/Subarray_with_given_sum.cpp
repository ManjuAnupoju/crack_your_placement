class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int i=0,j=0;
        int sum=0;
        while(j<=n)
        {
            if(s==0) return {-1};
            if(s==sum) return {i+1,j};
            else if(sum<s)
            {
                sum+=arr[j];
                j++;
            }
            else{
                sum-=arr[i];
                i++;
            }
        }
        return {-1};
    }
};
