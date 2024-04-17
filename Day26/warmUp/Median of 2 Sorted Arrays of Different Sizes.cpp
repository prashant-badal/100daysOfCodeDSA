// Median of 2 Sorted Arrays of Different Sizes 


double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
      int m = array1.size();
    int n = array2.size();

    // Ensure array1 is smaller or equal in size to array2
    if (m > n) {
        return MedianOfArrays(array2, array1);
    }

    int begin1 = 0, end1 = m;

    while (begin1 <= end1) {
        int i1 = (begin1 + end1) / 2;
        int i2 = (m + n + 1) / 2 - i1;

        int max1 = (i1 == 0) ? INT_MIN : array1[i1 - 1];
        int min1 = (i1 == m) ? INT_MAX : array1[i1];
        int max2 = (i2 == 0) ? INT_MIN : array2[i2 - 1];
        int min2 = (i2 == n) ? INT_MAX : array2[i2];

        if (max1 <= min2 && max2 <= min1) {
            if ((m + n) % 2 == 0) {
                return (max(max1, max2) + min(min1, min2)) / 2.0;
            } else {
                return max(max1, max2);
            }
        } else if (max1 > min2) {
            end1 = i1 - 1;
        } else {
            begin1 = i1 + 1;
        }
    }

    return -1; // Median not found
        
     
    }