class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++)
        {
            int k=0,j=image[i].size()-1;
            while(k<=j)
            {
                swap(image[i][k],image[i][j]);
                k++;
                j--;
            }
        }
        for(int i=0;i<image.size();i++)
        {
            for(int j=0;j<image[i].size();j++)
            {
                cout<<image[i][j]<<" ";
                image[i][j] = !image[i][j];
            }
            cout<<endl;
        }
        return image;
    }
};