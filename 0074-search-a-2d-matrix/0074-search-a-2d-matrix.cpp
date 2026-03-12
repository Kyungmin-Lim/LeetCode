class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        if(target<matrix[0][0] || target>matrix[row-1][col-1])
        {
            return false;
        }

        int start = 0;
        int end = row-1;
        int mid;
        int row_fix=-1;
        int col_fix;
        

        while(start<=end)
        {
            mid = (start+end)/2;
            if(target<matrix[mid][0])
            {
                end = mid-1;                
            }
            else if(target>matrix[mid][col-1])
            {
                start = mid+1;                
            }
            else
            {
                row_fix = mid;
                break;
            }
        }
        if(row_fix==-1)
        {
            return false;
        }
        

        start = 0;
        end = col-1;
        while(start<=end)
        {
            mid = (start+end)/2;
            if(target<matrix[row_fix][mid])
            {
                end = mid-1;                
            }
            else if(target>matrix[row_fix][mid])
            {
                start = mid+1;                
            }
            else
            {
                return true;
            }
        }
        
        //if(matrix[row_fix][col_fix]==target)
        //{
            //return true;
        //}
        
        return false;
        
    }
};