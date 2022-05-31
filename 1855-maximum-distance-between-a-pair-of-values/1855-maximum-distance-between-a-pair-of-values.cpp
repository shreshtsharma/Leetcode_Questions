class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {      
        int i = 0, j =0;
        int ans = 0;
        
        //if nums1[i] > nums2[j], then it will definetly greater for j - nums2.size()
        //so we inc i initially
        while (i < nums1.size() && nums1[i] > nums2[j])
            i++;
        
        while(true){
            if(i == nums1.size() || j == nums2.size())
                break;
            if(nums2[j] >= nums1[i]){
                ans = max(ans, j-i);
                j++;
            }else{
                //we increase both since we have to find max of j-i 
                //and only inc j will only dec the value which would not be included in our result
                i++;
                j++;
            }
        }
        return ans;
    }
    };
