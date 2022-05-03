class Solution {
	public:
		int findUnsortedSubarray(vector<int>& nums) {
			vector<int>dummy;
			dummy=nums;
			sort(nums.begin(),nums.end());
			int i=0,n=nums.size();
			while(i<n and nums[i]==dummy[i]){
				i++;
			}
			int j=nums.size()-1;
			while(j>=0 and nums[j]==dummy[j]){
				j--;
			}
			if(i==n)return 0;
			return j-i+1;
		}
	};