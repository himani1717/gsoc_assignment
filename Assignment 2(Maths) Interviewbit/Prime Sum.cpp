vector<int> Solution::primesum(int A) {
 
 vector<bool> Prime(A + 1, true);
        Prime[0] = false;
        Prime[1] = false;
        
   
        for(int i = 2; i <= A; i++) {
            if (!Prime[i]) continue;
            if (i > A / i) break;
            for (int j = i * i; j <= A; j += i) Prime[j] = false;
        }
        
        for(int i = 2; i <= A; i++) {
            if(Prime[i] && Prime[A - i]) {
                vector<int> ans;
                ans.push_back(i);
                ans.push_back(A - i);
                return ans;
            }
        } 
        
        vector<int> ans; 
        return ans;
}
