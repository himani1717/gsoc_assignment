#include<bits/stdc++.h>
using namespace std;
bool isTargetPresentInRow(vector<vector<int> >A, int target, int row){
    for(int i=0;i<A.size();i++){
        if(A[row][i]==target) return true;
    }
    return false;
}

bool isTargetPresentInCol(vector<vector<int> >A, int target, int col){
    for(int i=0;i<A.size();i++) {
        if(A[i][col]==target)
        return true;
    }    
    return false;
}


int main() {
   
    vector<vector<int>>A={{5,8,1} , {7,3,2},{6,4,9}};
     if(isTargetPresentInCol(A,9,2))
        cout<<"Target is present in the specified column"<<endl;
    else
        cout<<"Target is not present in the specified column"<<endl;   
    if(isTargetPresentInRow(A,5,1))
        cout<<"Target is present in the specified row"<<endl;
    else
        cout<<"Target is not present in the specified row"<<endl;
  
    return 0;   
}
