// Majority Element

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    
    int indexOfMajority(int a[],int n){
         int res=0;
        int count=1;
        
        for(int i=1;i<n;i++){
            if(a[res]==a[i])
            count++;
            
            else{
                count--;
            }
            
            if(count==0){
                res=i;
                count=1;
                
            }
        }
        return res;
    }
    
    int majorityElement(int a[], int size)
    {
        int count =0;
        int index=indexOfMajority (a,size);
        // your code herefor(
        for(int i=0;i<size;i++){
            if(a[i]==a[index])
            count ++;
        }
        
        return ((count>size/2 )?a[index]: -1);
       
        
        
        
    }
};