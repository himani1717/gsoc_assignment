int Solution::isPower(int A) {
     if(A == 1){
        return true;
    }
    int n=INT_MAX;
    
    for(int i = 2; i < 32; i++){
        for(int j = 2; j <= pow(n, 1.0/i); j++){
            if(pow(j, i) == A){
                return true;
            }
        }
    }
    return false;
}
