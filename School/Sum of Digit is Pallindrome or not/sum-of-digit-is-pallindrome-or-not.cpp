//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int temp = n;
        int sum = 0;
        while(temp > 0){
            int num1 = temp%10;
            sum+= num1;
            temp = temp/10;
        }
        int temp1 = sum;
        int sum1 = 0;
        while(temp1 >0){
            int num2 = temp1%10;
            sum1 = sum1 *10 +num2;
            temp1 = temp1/10;
        }
        if(sum == sum1){
            return 1;
        }
        else{
            return 0;
        }
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
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends