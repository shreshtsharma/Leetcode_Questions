class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr;
        int count=0;
        for(int i=0;i<=n;i++)
        {
            if(i==0)
            {
                arr.push_back(0);
            }
            else
            {
                count=binary_one(i);
                arr.push_back(count);
            }
        }
        return arr;
        
    }
    int binary_one(int num)
    {
        int flag=0;
        int count=0;
        while(num!=0)
        {
          flag=num%2;
            if(flag==1)
            {
                count++;
            }
            num=num/2;
            flag=0;
            
        }
        return count;
    }
};