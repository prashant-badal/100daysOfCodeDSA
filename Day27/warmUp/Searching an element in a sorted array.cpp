  int searchInSorted(int arr[], int N, int K) 
    { 
    
      int s = 0, e = N - 1;
    while (s <= e) {
        int m = s + (e - s) / 2;
        if (arr[m] == K)
            return 1;
        else if (arr[m] < K)
            s = m + 1;
        else
            e = m - 1;
    }
    return -1;
       
    }