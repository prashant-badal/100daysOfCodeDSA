// Frequencies of Limited Range Array Elements
 void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code hereu
        unordered_map<int,int>mp;
        
        for(int i=0;i<N;i++){
            if(arr[i]<=N)
           mp[arr[i]]++;
        }
        
        
        for(int i=0;i<N;i++){
       
       if(mp.find(i+1)!=mp.end()){
           arr[i]=mp[i+1];
       }
       else{
           arr[i]=0;
       }
       
       
      
        }
    }