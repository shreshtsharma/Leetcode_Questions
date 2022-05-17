class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int ind=-1;
        for(int i=0;i<numbers.size();i++)
        {
            int reminder=target-numbers[i];
            int ind=binarysearch(numbers,reminder,i+1,numbers.size()-1);
            if(ind!=-1 && ind!=i)
            {
            numbers.clear();
            numbers.push_back(i+1);
            numbers.push_back(ind+1);
            break;
            }
        }
        return numbers;
    }
        int binarysearch(vector<int>& nums,int target,int low,int high)
        {
        
            int mid;
            if(low<=high)
            {
                mid=low+(high-low)/2;
                if(nums[mid]==target )
                {
                    return mid;
                }
                else if(nums[mid]<target)
                {
                  return  binarysearch(nums,target,mid+1,high);
                }
                else
                {
                   return binarysearch(nums,target,low,mid-1);
                }
            }
            return -1;
        }
    
};