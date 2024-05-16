// Minimum Number in a sorted rotated array

 int minNumber(int arr[], int low, int high)
    {
        // Your code here
         // Perform binary search
     // Perform binary search
    while (low <= high) {
        // If the array is already sorted, return the first element
        if (arr[low] <= arr[high]) {
            return arr[low];
        }

        int mid = low + (high - low) / 2;

        // Check if mid is the minimum element
        if (arr[mid] < arr[mid - 1]) {
            return arr[mid];
        }
        // Check if mid+1 is the minimum element
        if (arr[mid] > arr[mid + 1]) {
            return arr[mid + 1];
        }

        // Adjust the search range
        if (arr[mid] < arr[high]) {
            high = mid - 1; // Minimum element is on the left side
        } else {
            low = mid + 1; // Minimum element is on the right side
        }
    }

    // This should never be reached
    return -1;
        
    }