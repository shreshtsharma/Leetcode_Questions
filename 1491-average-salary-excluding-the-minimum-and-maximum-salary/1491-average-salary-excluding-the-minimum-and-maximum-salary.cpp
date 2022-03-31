class Solution {
public:
    double average(vector<int>& salary) {
        int max=*max_element(salary.begin(),salary.end());
        int min=*min_element(salary.begin(),salary.end());
        cout<<max<<" "<<min<<endl;
        double sum=0;
        for(int i=0;i<salary.size();i++)
        { if(salary[i]==max || salary[i] == min)
        {
            continue;
        }
         else
         {
             sum+=salary[i];
         }
        }
        cout<<sum;
        return sum/(salary.size()-2);
    }
};