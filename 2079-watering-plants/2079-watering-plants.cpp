class Solution {
public:
    int wateringPlants(vector<int>& arr, int capacity) {
        int temp=capacity;
        int steps=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=capacity)
            {
                capacity-=arr[i];
                steps++;
            }
            else if(arr[i]>capacity)
            {
                steps+=i;
                capacity=temp;
                steps+=i+1;
                capacity-=arr[i];
            }
        }
        return steps;
    }
};