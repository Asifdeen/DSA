//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	long long int prime_Sum(int n){
   	    
   	    vector<bool> primes(n+1,true);
   	    long long int total = 0;
   	    
   	    for(int i = 2;i <= n;i++){
   	        if(primes[i]){
   	            for(int j = i*2;j <= n;j+=i){
   	                primes[j] = false;
   	            }
   	            total += i;
   	        }
   	    }
   	    
   	    return total;
   	    
   	}    
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends