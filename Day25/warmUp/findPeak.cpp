 public:
    int peakElement(int arr[], int n)
    {
     		
    	int low = 0, high = n - 1;
	int mid = (low + high) / 2;
		while(low <= high)
		{


			if((mid == 0 || arr[mid - 1] <= arr[mid]) &&
				(mid == n - 1 || arr[mid + 1] <= arr[mid]))
				return mid;
			if(mid > 0 && arr[mid - 1] >= arr[mid])
				high = mid -1;
			else
				low = mid + 1;
				mid = (low + high) / 2;
		}
	return -1;
    }