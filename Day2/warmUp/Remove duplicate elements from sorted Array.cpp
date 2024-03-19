class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int i=0,j=1;
        int count =1;
        if(n==1 )return 1;
        while(j<n){
            if(a[i]!=a[j]){
                i++;
                a[i]=a[j];
            count ++;
            }
            j++;
        }
        return count;
    }
};