// Two Repeated Elements

   vector<int> twoRepeated (int arr[], int n) {
        // Your code here
         // XOR all elements in the array
         int xorAns=0; 
    for (int i = 0; i < n + 2; i++) {
        xorAns ^= arr[i];
    }
    
    // XOR with numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        xorAns ^= i;
    }
    
    // Find a set bit (rightmost set bit in xorAns)
    int setBit = xorAns & ~(xorAns - 1);
    
    int set1 = 0, set2 = 0;
    
    // Divide elements into two sets based on the set bit
    for (int i = 0; i < n + 2; i++) {
        if (arr[i] & setBit) {
            set1 ^= arr[i];
        } else {
            set2 ^= arr[i];
        }
    }
    
    for (int i = 1; i <= n; i++) {
        if (i & setBit) {
            set1 ^= i;
        } else {
            set2 ^= i;
        }
    }
    
    // Now set1 and set2 should be the two repeated numbers
    
    
 int count1=0,count2=0;
    for (int i = 0; i < n + 2; i++){
        if(set1==arr[i]){
            count1++;
          
        }
        else if(set2==arr[i]){
             count2++;
            
        }
        else{
            continue;
        }
        
        if(count1==2){
              return {set1, set2};
        }
          if(count2==2){
              return {set2, set1};
        }
        
        
    }