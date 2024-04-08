// Pattern searching
// 


bool searchPattern(string str, string pat)
{
    // your code here
    int n=str.length();
    int m=pat.length();
    
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(pat[j]!=str[i+j])
            break;
        }
        if(j==m) return true;
    }
    return false;
}