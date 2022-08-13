class Solution {
public:
    int heightChecker(vector<int>& height) {
        vector<int>arr=height;
        sort(height.begin(),height.end());
        int c=0;
        for(int i=0;i<height.size();i++){
            if(height[i]!=arr[i])
            {
                c++;
            }
        }
        return c;
    }
};