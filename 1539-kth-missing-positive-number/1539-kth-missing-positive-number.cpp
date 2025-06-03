class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int left = 0; 
        int right = arr.size()-1;
        int pivot=0;

        while(left<=right)
        {
            pivot = (left+right)/2;

            if(arr[pivot]-pivot-1 < k)
            {
                left = pivot+1;
            }
            else
            {
                right = pivot-1;
            }
        }

        //return arr[right]+k - (arr[right]-right-1]);
        return k+right+1;
        
    }
};