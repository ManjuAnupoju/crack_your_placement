class Solution{
  public:
    int minlen(string arr[],int n)
    {
        int minn=arr[0].size();
        for (int i=1;i<n;i++)
        {
            if(arr[i].length()<minn)
            minn=arr[i].size();
        }
        return minn;
    }
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        int minimum_length=minlen(arr,N);
        string result="";
        char curr;
        for(int i=0;i<minimum_length;i++)
        {
            curr=arr[0][i];
            for(int j=1;j<N;j++)
            {
                if(arr[j][i]!=curr){
                    if(result.size()==0) return "-1";
                    return result;
                }
            }
            result+=curr;
        }
        
        return result;
        
    }
};
