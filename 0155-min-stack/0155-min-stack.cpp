class MinStack {
public:
// 2. Without Using Extra Space
    stack<long long> st;
    long long min_ele;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty())
        {
            st.push(val);
            min_ele=val;
        }
        else if(val<min_ele)
        {
            
            st.push((long)2*val-min_ele);
            min_ele=val;
        }
        else
        st.push(val);
    }
    
    void pop() {
        if(!st.empty()){
        if(st.top()<min_ele)
        {
            min_ele=2*min_ele-st.top();
        }
        st.pop();
        }
    }
    
    int top() {
        if(st.empty())
            return -1;
        if(st.top()<min_ele)
        return min_ele;
        else
        return st.top();
    }
    
    int getMin() {
        if(st.empty())
            return -1;
        return min_ele;
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