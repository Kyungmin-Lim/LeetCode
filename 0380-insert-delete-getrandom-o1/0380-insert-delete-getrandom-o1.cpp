class RandomizedSet {
    // Time complexity: O(1)
    // Space complexity: O(N)
private:
    vector<int> num;
    unordered_map<int, int> map;   // key:val = [val, idx] 
public:
    RandomizedSet() {

    }
    
    bool insert(int val) {
        if(map.find(val)==map.end())
        {
            num.push_back(val);
            map[val] = num.size()-1;            
            return true;
        }
        else
        {
            return false;
        }        
    }
    
    bool remove(int val) {
        if(map.find(val)==map.end())
        {
            return false;
        }
        else
        {
            int idx = map[val];
            map[num[num.size()-1]] = idx;

            swap(num[idx], num[num.size()-1]);  // num[num.size()-1] = num.back() 
            num.pop_back();  
            map.erase(val);
            return true;       
        }
    }
    
    int getRandom() {
        int rand_idx = rand()%num.size();
        return num[rand_idx];       
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */