class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //Time complexity is O(n);
        priority_queue <int> pq;
        for(int i=0;i<nums.size();i++)
        {pq.push(nums[i]);
        }
        while(k>1)
        {
            pq.pop();
            k--;
        }
        return pq.top();
    }
};