// class comp{
//     public:
//     bool operator()(auto a,auto b)
//     {
//         if(a.second==b.second)
//         return a.first<b.first;
//         else
//         return a.second<b.second;
//     }
// };
class Solution {
public:

    int countones(int num)
    {
        int one=0;
        while(num>0)
        {
            if(num%2==1)
            {
                one++;
            }
            num/=2;
        }
        return one;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> vec;
        for(int i=0;i<arr.size();i++)
        {
            int ans=countones(arr[i]);
            vec.push_back({arr[i],ans});
        }
        sort(vec.begin(),vec.end(),[&](pair<int,int>a,pair<int,int>b){
            if(a.second==b.second)
        return a.first<b.first;
        else
        return a.second<b.second;
        });
        for(int i=0;i<vec.size();i++)
        {
            arr[i]=vec[i].first;
        }
        return arr;
    }
};