class Solution {
public:
    bool isSafe(vector<string>& board,int row,int col,int n)
    {
         // check upper diagonal
        int duprow = row;
        int dupcol = col; 
        
        while(row >= 0 && col >= 0) {
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }
        
        
        col = dupcol; 
        row = duprow;
        while(col>=0) {
            if(board[row][col] == 'Q') return false;
            col--; 
        }
    
        row = duprow;
        col = dupcol; 
        while(row<n && col>=0) {
            if(board[row][col] == 'Q') return false;
            row++;
            col--; 
        }
        
        return true;  
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board;
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board.push_back(s);
        }
        vector<vector<string>> res;
        helper(0,n,board,res);
        return res;
    }
    void helper(int col,int n,vector<string>& board,vector<vector<string>>& res)
    {
        if(col==n)
        {
            res.push_back(board);
            
            for(auto x:board)
            {
                cout<<x<<endl;
            }
            cout<<endl;
            return ;
        }
        for(int row=0;row<n;row++)
        {
            
            if(isSafe(board,row,col,n))
            {
                board[row][col]='Q';
                helper(col+1,n,board,res);
                board[row][col]='.';
            }
        }
    }
};