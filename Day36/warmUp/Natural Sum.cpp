// Natural Sum
// 

   	int find(int n){
   	    int ans = -1;
    int s = 1, e = n;
    
    while (s <= e) {
        int m = (s + e) / 2;
        long long sum = (long long)m * (m + 1) / 2; // Use long long to prevent overflow
        
        if (sum == n)
            return m; // Found exact match
        else if (sum > n)
            e = m - 1;
        else {
            // Store current value of m as a potential answer
            s = m + 1;
        }
    }
    
    return -1; // Return the largest s for which sum <= n
   	}    