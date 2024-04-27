// Rope Cutting
 
        vector<int> RopeCutting(int arr[], int n)
    {
        // Complete the function
        sort(arr,arr+n);
      vector<int> v;
    int mini = 0;
    for (int curr = 1; curr < n; curr++)
    {
        if ((arr[curr] - arr[mini]) > 0)
        {
          
            v.push_back(n - curr);
            mini = curr;
        }
    }
    return v;
    }