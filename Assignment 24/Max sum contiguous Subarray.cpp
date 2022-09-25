int Solution::maxSubArray(const vector<int> &A) {
   int tempMax = A[0];
   int n=A.size();
   int currentMax = tempMax;
   for (int i = 1; i < n; i++ ) { 
      currentMax = max(A[i], currentMax+A[i]);
      tempMax = max(tempMax, currentMax);
   }
   return tempMax;
}
