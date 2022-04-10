class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack <int> st;
        int sum=0;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="+")
            {
                int temp1=st.top();
                st.pop();
                int temp2=st.top();
                st.pop();
                int res=temp1+temp2;
                st.push(temp2);
                st.push(temp1);
                st.push(res);
            }
            else if(ops[i]=="C")
            {
                st.pop();
            }
            else if(ops[i]=="D")
            {
                st.push(st.top()*2);
            }
            else
            {
                st.push(stoi(ops[i]));
            }
        }
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};