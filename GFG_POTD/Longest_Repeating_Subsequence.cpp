class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n=str.size();
		    vector <vector<int>>dp(n+1,vector<int>(n+1,0));
		    int movea,moveb;
		    for(int i=n-1;i>-1;i--)
		    {
		        for(int j=n-1;j>-1;j--)
		        {
		            movea=dp[i+1][j];
		            moveb=dp[i][j+1];
		            int take=0;
		            if(i!=j && str[i]==str[j])
		            take=1+dp[i+1][j+1];
		            
		            dp[i][j]=max({movea,moveb,take});
		        }
		    }
		    return dp[0][0];
		}

};
