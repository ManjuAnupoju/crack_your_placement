class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long ans=LONG_MAX;
    for(int i=0;i+m-1<n;i++)
    {
        int j=i+m-1;
        if(ans>(a[j]-a[i]))  ans=a[j]-a[i];
    }   
    return ans;
    }
};
