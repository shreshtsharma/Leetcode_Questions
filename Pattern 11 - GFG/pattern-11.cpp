//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here\
        
        for(int i=0;i<n;i++)
        {
            int fg;
            if(i%2==0)
            fg=1;
            else 
            fg=0;
            for(int j=0;j<=i;j++)
            {
                cout<<fg<<" ";
                fg=!fg;
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends