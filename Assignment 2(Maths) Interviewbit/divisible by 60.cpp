int Solution::divisibleBy60(vector<int> &A) {
    int n=A.size();
    int temp=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(A[i]==0)temp++;
    }
    if( A[0]==0 && n==1)return 1;
    if(temp==0)return 0;
    temp=0;
    for(int i=0;i<n;i++){
        temp=temp+A[i];
        if(A[i]%2==0)count++;
    }
    if(temp%3!=0) return 0;
    if(count>=2)return 1;
    return 0;
}

