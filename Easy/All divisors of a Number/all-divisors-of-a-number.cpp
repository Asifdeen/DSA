//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        vector <int> result;
         
        for(int i=1;i*i<=n;i++){
            if(n%i == 0){
                result.push_back(i);
                if(i != n/i){
                    result.push_back(n/i);
                }
            }
            
        }
        
        sort(result.begin(),result.end());
        
        for(auto num: result){
            cout << num << " ";
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends