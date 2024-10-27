/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    if(nums.length<=1)
    {
        return nums.length ;
    }
    
    let i=1,j=1;
    for( i;i<nums.length;i++)
    {
        if(nums[i]!=nums[i-1])
        {
            nums[j]=nums[i];
            j++;
        }
        
    }
    return j;
};