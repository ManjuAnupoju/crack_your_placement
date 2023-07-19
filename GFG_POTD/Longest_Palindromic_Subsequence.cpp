int  solve(string A,string rev,int i,int j,int n,vector<vector<int>>& dp)
    {
        if(i==n || j==n)
        {
            dp[i][j]= 0;
            return dp[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(A[i]==rev[j]) {
            dp[i][j]=1+solve(A,rev,i+1,j+1,n,dp);
            return dp[i][j];
        }
        else{
            int a=solve(A,rev,i,j+1,n,dp);
            int b=solve(A,rev,i+1,j,n,dp);
            dp[i][j]= max(a,b);    
            return dp[i][j];
        }
    }
    int longestPalinSubseq(string A) {
        //code here
        int n=A.length();
        vector <vector<int>>dp(n+1,vector<int>(n+1,-1));
        string rev=string(A.rbegin(),A.rend());
        return  solve(A,rev,0,0,n,dp);

    }
