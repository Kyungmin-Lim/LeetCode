class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {

        if(mat.empty())
        {
            return vector<int> ();
        }

        int N = mat.size();
        int M = mat[0].size();

        vector<int> result;
        for(int i=0; i<=N+M-2; i++)
        {
            for(int s=0; s<=i; s++)
            {
                int x = s;
                int y = i-s;

                if(i%2==0)
                {
                    swap(x, y);
                }
                if(x>=N || y>=M)
                {
                    continue;
                    
                }
                result.push_back(mat[x][y]);                  

            }
        }
        return result;
        
    }
};