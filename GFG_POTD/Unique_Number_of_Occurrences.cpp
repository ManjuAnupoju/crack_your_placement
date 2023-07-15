class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map <int,int> m;
        for (int i=0;i<n;i++)
        m[arr[i]]++;
        unordered_set <int> s;
        for(auto i:m)
        {
            int a=i.second;
            if(s.count(a)>0) return false;
            s.insert(a);
        }
        return true;
    }
};
