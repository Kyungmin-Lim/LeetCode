class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missing_arr;

        int num=0;
        int count=0;

        int result=-1;

        for(int i=1; i<arr.back(); i++)
        {
            if(arr[num] != i)
            {
               // missing_arr.push_back(i);
                count++;
                //cout << "1. " << i << ": " << arr[num] << "    count: " << count<< endl;
            }
            else
            {
                //cout << "2. " <<i << ": " << arr[num] << "    count: " << count<< endl;
                num++;
                
            }

            if(count == k)
            {
                result = i;
                
                break;
            }
            

        }

        if(result == -1)
        {
            return arr.back() + k - count;
        }

        return result;


        
    }
};