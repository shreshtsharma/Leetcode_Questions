/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    if(nums.length<=1)
    {
        return nums.length;
    }
    let unique_count=1;
    let i=1,j=1;
    for(i;i<nums.length;i++)
    {
        if(nums[i]==nums[i-1])
        {
            if(unique_count<2)
            {
                nums[j]=nums[i];
                j++;
                unique_count++;
            }
        }
        else if(nums[i]!=nums[i-1])
        {
            unique_count=1;
            nums[j]=nums[i];
            j++;
        }
    }
    return j;
    
};