class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Time complexity: O(N^2)
        // Space complextity: O(1)
        
        int buffer = 0;
        int n = matrix[0].size();

        if(n==1)
        {
            return;
        }

        int loop = n>>1;
        

        for(int i=0; i<loop; i++)
        {   
            int start = i;
            int end = n-i-1;

            for(int j=0; j<n-i*2-1; j++)
            {
                int buffer = matrix[start][start+j];
                matrix[start][start+j] = matrix[end-j][start];
                matrix[end-j][start] = matrix[end][end-j];
                matrix[end][end-j] = matrix[start+j][end];
                matrix[start+j][end] = buffer;

            }
        }
    }
};