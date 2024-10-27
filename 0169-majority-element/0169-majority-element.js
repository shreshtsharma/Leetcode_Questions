/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let majElement=nums[0];
    let majCount=1;
    for(let i=1;i<nums.length;i++)
    {
        if(majCount==0)
        {
            majElement=nums[i];
            majCount=1;
        }
       else if(nums[i]==majElement)
        {
            majCount++;
        }
        else
        {
            majCount--;
        }
    }
    return majElement;
};