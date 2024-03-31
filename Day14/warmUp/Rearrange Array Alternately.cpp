// Rearrange Array Alternately


 void rearrange(long long *arr, int n) 
    { 
    	
    	
    	  int start = 0, end = n - 1;
    int max_element = arr[n - 1] + 1; // Initializing max_element to a value greater than the maximum element in the array

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            arr[i] += (arr[end] % max_element) * max_element;
            end--;
        } else {
            arr[i] += (arr[start] % max_element) * max_element;
            start++;
        }
    }

    for (int i = 0; i < n; i++) {
        arr[i] /= max_element;
    }
    
    	 
    