class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
        // code here
        stack <pair<int,int>> s;
        for( int i=0;i<N;i++)
        {
            if(s.empty()) s.push(make_pair(color[i],radius[i]));
            else
            {
                auto it=s.top();
                if(it.first==color[i] && it.second==radius[i])
                    s.pop();
                else
                    s.push(make_pair(color[i],radius[i]));
            }
        }
        return s.size();
    }
};
