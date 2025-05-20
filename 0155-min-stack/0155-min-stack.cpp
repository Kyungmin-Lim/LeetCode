class MinStack {

private:
    vector <int> s;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push_back(val);
        
    }
    
    void pop() {
        if(s.size()==0)
        {
            return;
        }
        else
        {        
            s.pop_back();
        }

        
    }
    
    int top() {

        if(s.size()==0)
        {
            return -1;
        }
        else
        {   
            int num = s.size();     
            return s[num-1];
        }
        
    }
    
    int getMin() {
        int num = s.size();
        int result;

        if(num==0)
        {
            return -1;
        }
        else 
        {
            result = s[0];
        }

        for(int i=1; i<num; i++)
        {
            if(result > s[i])
            {
                result = s[i];
            }
        }
        return result;

        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */