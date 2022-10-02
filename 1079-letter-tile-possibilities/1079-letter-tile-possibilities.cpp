class Solution {
public:
    int numTilePossibilities(string tiles) {
        set<string> st;
        string str;
        vector<int> freq(tiles.size(),0);
        sort(tiles.begin(),tiles.end());
        solve(tiles,st,freq,str,0);
        return st.size();
    }
    void solve(string &tiles,set<string> &st,vector<int> &freq,string &str,int ind)
    {
        if(ind>tiles.size())
        {
            return;
        }
        for(int i=0;i<tiles.size();i++)
        {
            if(freq[i]==0){
                
                freq[i]=1;
                str.push_back(tiles[i]);
                st.insert(str);
                solve(tiles,st,freq,str,ind+1);
                str.pop_back();
                freq[i]=0;
        }
    }
    }
};