class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map <int,int> m;
        m[0]=-1;
        int s=0,ans=0;
        for(int i=0;i<n;i++)
        {
            s=s+A[i];
            if(m.count(s))
            {
                ans=max(ans,i-m[s]);
            }
            else{
                m[s]=i;
            }
        }
        return ans;
    }
};
