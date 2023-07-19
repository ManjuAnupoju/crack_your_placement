class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int> > v;
        int sell=0,buy=0;
        for(int i=0;i<n-1;i++)
        {
            if(A[i]>A[i+1])
            {
                if(buy!=sell) {
                    v.push_back({buy,sell});
                    sell++;
                    buy=sell;
                }
                else{
                buy++;
                sell++;
                }
            }
            else if(A[i]==A[i+1] )
            {
                if(buy==sell){
                buy++;
                sell++;
                }
                else{
                    sell++;
                }
            }
            else{
                sell++;
            }
        }
        if(buy!=sell)
        v.push_back({buy,sell});
        return v;
    }
};
