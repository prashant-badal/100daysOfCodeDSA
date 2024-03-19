class Solution{
public:	
	// Function returns the second
	// largest elements
	int firstMax(int arr[],int n){
	    int max=arr[0];
	    for(int i=1;i<n;i++){
	        if(arr[i]>max){
	            max=arr[i];
	        }
	    }
	    return max;
	};
	
	
	int print2largest(int arr[], int n) {
	    // code here
	    
	   int first= firstMax(arr,n);
	 
	   int res=-1;
	   for(int i=0;i<n;i++){
	        if((arr[i] != first )&& (arr[i]>res)){
	            res=arr[i];
	        }
	        
	    }
	    return res;
	   
	}
};