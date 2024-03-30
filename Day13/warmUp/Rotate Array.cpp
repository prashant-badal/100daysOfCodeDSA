// Rotate Array

 void reverseArr(int arr[], int s,int e){
        while(s<e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
    
    void rotateArr(int arr[], int d, int n){
        d=d%n;
      reverseArr(arr,0,d-1);
        reverseArr(arr,d,n-1);
        reverseArr(arr,0,n-1);
    }