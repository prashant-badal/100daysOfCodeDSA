// Move all zeroes to end of array


class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int i=0;
	    for(int j=1;j<n;j++){
	        if(arr[i]>0)
	        i++;
	        swap(arr[i],arr[j]);
	    }
	}
};