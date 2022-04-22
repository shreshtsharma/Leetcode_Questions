class MyHashMap {
public:
    int size=1000;
    vector<vector<pair<int,int>>> res;
    MyHashMap() {
        res.resize(size,vector<pair<int,int>>());
    }
    
    void put(int key, int value) {
        int k=key%size;
        for(int i=0;i<res[k].size();i++)
        {
            if(res[k][i].first==key)
            {
                res[k][i].second=value;
                return;
            }
        }
        res[k].push_back({key,value});
    }
    
    int get(int key) {
        int k=key%size;
        for(int i=0;i<res[k].size();i++)
        {
            if(res[k][i].first==key)
            {
                return res[k][i].second;
            }
        }
        
        return -1;
    }
    
    void remove(int key) {
        int k=key%size;
        bool flag=0;
        for(int i=0;i<res[k].size();i++)
        {
            if(res[k][i].first==key)
                flag=true;
            
            if(flag && i+1<res[k].size())
                res[k][i]=res[k][i+1];
        }
        if(flag && res[k].size()>0)
            res[k].erase(res[k].end()-1);
    }
};
