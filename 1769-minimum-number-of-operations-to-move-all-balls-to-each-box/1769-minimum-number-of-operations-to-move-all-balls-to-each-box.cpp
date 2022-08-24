class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> res;
        for(int k=0;k<boxes.size();k++)
        {
            int i=0;
            int j=boxes.size()-1;
            int sum=0;
            while(i!=j)
            {
                if(boxes[i]=='1')
                {
                    sum+=abs(k-i);
                }
                if(boxes[j]=='1')
                {
                    sum+=abs(k-j);

                }
                if(i<k)
                {
                    i++;
                }
                if(j>k)
                {
                    j--;
                }
            }
            res.push_back(sum);
        }
        return res;
    }
};