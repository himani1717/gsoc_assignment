int Solution::reverse(int A) {
   long long rev=0;
    while(A != 0){
        rev= rev*10 + (A%10);    
        A = A/10;
    }
  if(rev<INT_MIN || rev>INT_MAX)return 0;
   return rev;
}
