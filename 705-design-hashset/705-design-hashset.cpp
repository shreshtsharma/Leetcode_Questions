class MyHashSet {
public:
    vector<int> hash;
    MyHashSet() {
        
    }
    
    void add(int key) {
        hash.push_back(key);
    }
    
    void remove(int key) {
        vector<int>:: iterator it;
        it=find(hash.begin(),hash.end(),key);

        hash.erase(std::remove(hash.begin(), hash.end(), key), hash.end());
        
    }
    
    bool contains(int key) {
        if(find(hash.begin() ,hash.end(),key)!=hash.end())
        {
            return true;
        }
        else
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */