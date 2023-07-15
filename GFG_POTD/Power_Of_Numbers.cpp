class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       //Your code here
       long long ans;
        if(R==0) return 1;
        if(R%2==0){
            ans=power(N,R/2);
            ans=ans*ans;
        }
        else{
            ans=N;
            ans=ans*power(N,R-1);
        }
        return ans%1000000007;
    }

};
