//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        
        // code here
        long long int mini=a[0];
        long long int maxi =a[0];
        
        for(int i=1;i<n;i++){
            maxi=max(a[i],maxi);
            mini=min(a[i],mini);
        }
        return {mini,maxi};
    }
};