class Solution {
public:
   int specialArray(vector<int>& nums) {
        for(int i=1;i<1001;i++){
            int cnt=0;
            for(auto num: nums){
                if(i<=num)
                    cnt++;
            }
            if(i == cnt)
                return i;
        }
        return -1;
	}
};