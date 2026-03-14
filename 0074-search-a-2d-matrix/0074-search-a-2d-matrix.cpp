class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row*col-1;
        int mid;

        while(start<=end)
        {
            mid = start+(end-start)/2;
            int row_idx = mid / col;
            int col_idx = mid % col;

            if(target > matrix[row_idx][col_idx])
            {
                start = mid+1;
            }
            else if(target < matrix[row_idx][col_idx])
            {
                end = mid-1;
            }
            else
            {
                return true;
            }
        }
        return false;

       
    }
};