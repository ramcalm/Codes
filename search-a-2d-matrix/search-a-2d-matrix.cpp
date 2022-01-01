class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size() || target < matrix[0][0])
            return false;
        int i;
        for(i=0;i<matrix.size()-1;i++)
        {
            if(target>=matrix[i][0] && target<matrix[i+1][0])
                break;
        }
        for(int j=0;j<matrix[0].size();j++)
        {
            if(matrix[i][j]==target)
                return true;
        }
        return false;
    }
};