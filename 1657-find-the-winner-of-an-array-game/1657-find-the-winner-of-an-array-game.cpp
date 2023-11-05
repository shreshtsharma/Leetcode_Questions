class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int maxi=INT_MIN;
        queue<int> q;
        for(int i=1;i<arr.size();i++)
        {
            q.push(arr[i]);
            maxi=max(maxi,arr[i]);
        }
        int curr=arr[0];
        int win=0;
        while(1)
        {
            int temp=q.front();
            q.pop();
            if(curr>temp)
            {
                win++;
                q.push(temp);
            }
            else
            {
                win=1;
                q.push(curr);
                curr=temp;
            }
            if(win==k || curr==maxi)
            {
                return curr;
            }
        }
        return 0;
    }
};