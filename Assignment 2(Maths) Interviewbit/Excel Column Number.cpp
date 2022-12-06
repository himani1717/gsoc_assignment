int Solution::titleToNumber(string A) {  
    int size = A.size();
    int s=0;
    int j=size-1;
    for( int i = 0; i <= size - 1; i++ ){
       int x=A[i]-'A'+1;
        s=s+pow(26,j)*x;
        j--;
    }
    return s;
    
}
