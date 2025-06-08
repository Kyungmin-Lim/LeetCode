class SparseVector {
private:
    vector<pair<int, int>> data;
public:
    
    SparseVector(vector<int> &nums) {
        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
            if(nums[i]!=0)
            {
                data.push_back({i, nums[i]});
            }
        }
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {

        int ret=0;
        int i=0;
        int j=0;
        
        const auto &v1 = data;
        const auto &v2 = vec.data;


        while((i<v1.size())&&(j<v2.size()))
        {
            if(v1[i].first == v2[j].first)
            {
                ret+= v1[i].second*v2[j].second;
                i++;
                j++;
            }
            else if(v1[i].first < v2[j].first)
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return ret;
        
    }
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);