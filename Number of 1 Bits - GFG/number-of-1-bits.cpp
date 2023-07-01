//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        
        int himanshu=0;
        while(N)
        {
         if(N&1==1)
         {
             himanshu++;
             
         }
         N=N>>1;
        }
        return himanshu;
    }
};






//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends