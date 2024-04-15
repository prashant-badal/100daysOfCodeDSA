// Search in Infinite Sized Array


int bSearch(int arr[], int low, int high, int x)
{   
    int res=-1;
	int m=low+high/2;
	while(low<=high){
	    if(arr[m]==x){
	        return m;
	    }
	    else if(arr[m]>x){
	        high=m-1;
	        
	    }
	    else{
	        low=m+1;
	    }
	}
	return res;
}


int search(int arr[], int x)
{
   if(arr[0]==x)return 0;
   int i=1;
   while(arr[i]<x){
       if(arr[i]==x)return i;
       i=2*i;
     
   }
    return bSearch(arr,(i/2)-1,i,x);
       
}