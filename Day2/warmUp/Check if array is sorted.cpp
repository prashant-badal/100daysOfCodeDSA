// Check if array is sorted
class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        if(n==1){
            return 1;
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1])
            
            return 0;
        }
        return 1;
    }
};