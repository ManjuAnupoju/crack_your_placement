class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here
        vector<pair<int,int>> v;
        map <int,int> m1;
        map<int,int> m2;
        for(int i=0;i<N;i++)
        {
            m1[A[i]]++;
        }
        for(int i=0;i<M;i++) m2[B[i]]++;
        for(auto it: m1)
        {
            int f=X-it.first;
            if(m2[f]>0){
                v.push_back(make_pair(it.first,f));
                m1[it.first]=0;
                m2[f]=0;
            }
        }
        return v;
    }
};
