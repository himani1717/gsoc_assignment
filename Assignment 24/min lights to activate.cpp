int Solution::solve(vector<int> &A, int B) {
    int i=0,count=0,n=A.size();

while(i<n){
    int j=min(n-1,i+B-1);
    int k=max(0,i-B+1);
    bool light=false;
    while(j>=k){
        if(A[j]==1){
            light=true;
            break;
        }
        j--;
    }

    if(light==false){
        return -1;
    }

    count++;
    i=j+B;
}

return count;
}
