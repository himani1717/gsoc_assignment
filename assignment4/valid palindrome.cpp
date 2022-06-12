class Solution {
public:
    bool isPalindrome(string str) {
         transform(str.begin(), str.end(), str.begin(), ::tolower);
         
         string c;
         for(char k: str)  {
           if(isalnum(k))
             c += k;
          }
        
        string b = c;
        int n = c.size();
         for (int j=0;j<n/2;j++){
         swap(c[j],c[n-1-j]);
          }
        if ( c==b) return 1;
     return 0;
    }
};
