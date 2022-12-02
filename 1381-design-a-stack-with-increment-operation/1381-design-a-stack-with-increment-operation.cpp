class CustomStack {
public:
stack<int> st;
int n=0;
    CustomStack(int maxSize) {
        n=maxSize;
    }
    
    void push(int x) {
        if(st.size()!=n)
        st.push(x);
    }
    
    int pop() {
        if(!st.empty()){
        int ret= st.top();
        st.pop();
        return ret;}
        else
        return -1;
    }
    
    void increment(int k, int val) {
        vector<int> vec;

        while(st.size()>k)
        {
            vec.push_back(st.top());
            st.pop();
        }
        if(k>=st.size())
        {
            while(!st.empty())
            {
                vec.push_back(st.top()+val);
                st.pop();
            }
            for(int j=vec.size()-1;j>=0;j--)
            {
                st.push(vec[j]);
            }
        }

        }

};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */