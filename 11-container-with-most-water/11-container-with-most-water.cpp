class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int br,len;
        int area,maxarea=0;
        while(i<=j)
        {
            if(height[i]>height[j])
            {
                br=height[j];
            }
            else{
                br=height[i];
            }
            len=j-i;
            area=len*br;
            if(area>maxarea)
            {
                maxarea=area;
            }
              if(height[i]>height[j])
            {
                j--;
            }
            else if(height[j]>height[i]){
                i++;
            }
            else
            {
                i++;
                    j--;
            }
        }
        return maxarea;
    }
};