

// Longest Consecutive 1's
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        // code here
        int  count =0;
        int res=0;
        while(N>0){
            if((N & 1) ==0){
                count=0;
            }
            else{
               count++;
           
            }
             res=max(count ,res); 
            N=N>>1;
        }
        return res;
        
        
    }
};