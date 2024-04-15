// Square root of a number


  long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
       
      long long s = 1, e = x, res = 1;
    while (s <= e) {
      long long m = (e - s) / 2 + s;
        long long prod = m * m;
        if (prod == x) // Found exact square root
            return m;
        else if (prod < x) {
            s = m + 1;
            res = m; // Update res only when prod < x
        } else {
            e = m - 1;
        }
    }
    return res;
    }