/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    
   let i=m-1;
   let j=n-1;
   let x=m+n-1;
   while(j>=0)
   {
         if(i >= 0 && nums1[i] > nums2[j]) {
                nums1[x] = nums1[i];
                x--;
                i--;
            }
            else {
                nums1[x] = nums2[j];
                x--;
                j--;
            }
   }
};