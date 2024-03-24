// Equilibrium Point
        int ls=0;
        int total=0;
        int rs=0;
        for(int i=0;i<n;i++){
           rs+=a[i];
        }
        
        for(int i=0;i<n;i++){
           
            rs-=a[i];
            
            if(ls==rs ){
                return i+1;
            }
            ls=ls+a[i];
        }
        return -1;
        