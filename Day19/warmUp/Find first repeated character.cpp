// Find first repeated character


string firstRepChar(string s)
{
    //code here.
    int m =26;
    int a[m]={0};
    
    
      for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
 
        // If the count of the character is not zero,
        // it means the character is repeated, so we return
        // it
        if (a[ch - 'a'] != 0)
            return string(1, ch);
        else
            // Increment the count of the character in the
            // array
            a[ch - 'a']++;
    }
 
    // If no character is repeated, return "-1"
    return "-1";
    
  
    
}