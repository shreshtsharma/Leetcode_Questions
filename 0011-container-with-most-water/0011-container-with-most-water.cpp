class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxw=0;
        while(i<j)
        {
            int minh=min(height[i],height[j]);
            int base=j-i;
            maxw=max(maxw,minh*base);
            if(height[i]<=height[j])
            {
                i++;
            }
            else if(height[i]>height[j])
            {
                j--;
            }
        }
        return maxw;
    }
};