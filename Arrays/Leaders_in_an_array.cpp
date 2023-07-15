class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector <int> v;
        v.push_back(a[n-1]);
        int large=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=large)
            {
                v.push_back(a[i]);
                large=a[i];
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
