void helper(string curr,vector <bool> &vis,vector<string> &ans,string S)
    {
        if(curr.size()==S.size())
        {
            ans.push_back(curr);
            return ;
        }
        for(int i=0;i<S.size();i++)
        {
            if(!vis[i])
            {
                curr.push_back(S[i]);
                vis[i]=1;
                helper(curr,vis,ans,S);
                vis[i]=0;
                curr.pop_back();
            }
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector <string > ans;
        vector <bool> vis(S.size(),0);
        helper("",vis,ans,S);
        sort(ans.begin(),ans.end());
        return ans;
    }
