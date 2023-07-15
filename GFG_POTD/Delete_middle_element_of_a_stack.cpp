class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.
        deque <int> q;
        while(!s.empty())
        {
            q.push_back(s.top());
            s.pop();
        }
        int mid=ceil((sizeOfStack+1)/2);
        if( sizeOfStack%2==0) mid++;
        int i= sizeOfStack;
        while(i>0)
        {
            if(i==mid){
                q.pop_back();
            }
            else{
                s.push(q.back());
                q.pop_back();
            }
            i--;
        }
    }
};
