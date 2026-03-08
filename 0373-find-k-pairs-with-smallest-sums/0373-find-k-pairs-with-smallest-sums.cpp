class Solution {
private:
    struct Node{
        int sum;
        int i;
        int j;

        bool operator >(const Node& other) const
        {
            return sum > other.sum;
        }
    };
public:

    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<Node, vector<Node>, greater<Node>> minHeap;

        int idx = min(int(nums1.size()), k);
        for(int i=0; i<idx; i++)
        {
            Node val(nums1[i]+nums2[0], i, 0);            
            minHeap.push(val);
        }

        vector<vector<int>> result;
        while(k--)
        {
            Node val = minHeap.top();
            int i = val.i;
            int j = val.j;
            result.push_back({nums1[i], nums2[j]});
            minHeap.pop();

            if(i<nums1.size() && j+1<nums2.size())
            {
                minHeap.push(Node(nums1[i]+nums2[j+1], i, j+1));
            }

        }

        return result;       
    }
};