class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    int find(int x,int y)
    {
        x/=3;
        y/=3;
        return x*3+y;
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        vector <vector<bool>> rows(10,vector<bool> (10,0));
        vector <vector<bool>> cols(10,vector<bool> (10,0));
        vector <vector<bool>> subgrid(10,vector<bool> (10,0));
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                rows[i][grid[i][j]]=1;
                cols[j][grid[i][j]]=1;
                subgrid[find(i,j)][grid[i][j]]=1;
            }
        }
        function<bool(int,int)> helper=[&](int i,int j)->bool{
            if(i==9) return 1;
            int nexti=i;
            int nextj=j+1;
            if(nextj==9) {
                nexti=i+1;
                nextj=0;
            }
            if(!grid[i][j])
            {
                for(int choose=1;choose<=9;choose++){
                    if(!rows[i][choose] && !cols[j][choose] && !subgrid[find(i,j)][choose])
                    {
                        grid[i][j]=choose;
                        rows[i][choose]=1;
                        cols[j][choose]=1;
                        subgrid[find(i,j)][choose]=1;
                        bool ok=helper(nexti,nextj);
                        if(ok) return 1;
                        grid[i][j]=0;
                        rows[i][choose]=0;
                        cols[j][choose]=0;
                        subgrid[find(i,j)][choose]=0;
                    }
                }
            }
            else{
                return helper(nexti,nextj);
            }
            return 0;
        };
        return helper(0,0);
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cout<<grid[i][j]<<" ";
            }
        }
    }
};
