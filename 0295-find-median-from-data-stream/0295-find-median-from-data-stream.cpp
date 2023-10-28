class MedianFinder {
public:
    priority_queue<int> left;
    priority_queue<int,vector<int>,greater<int>>right;
    MedianFinder() {
       
    }
    
    void addNum(int num) {
        if(left.empty())
        {
            left.push(num);
        }
        else if(left.size()==right.size())
        {
            if(!right.empty())
			{
				if(right.top()<=num)
				{
					int temp=right.top();
					right.pop();
					right.push(num);
					left.push(temp);
				}
				else
				{
					left.push(num);
				}
			}
        }
        else{
            int temp=left.top();
			if(temp>num)
			{
				left.pop();
				left.push(num);
				right.push(temp);
			}
			else
			{
				right.push(num);
			}
        }
    }
    
    double findMedian() {
        int n=left.size(),m=right.size();
        if((n+m)%2==0)
        {
            double ans=( (double) left.top()+right.top())/2.0;
            cout<<left.top()<<right.top();
            return ans;
        }
        else
        {
            return (double)left.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */