#include<bits/stdc++.h>
using namespace std;

bool isTargetPresent(vector<int>A, int target){
   for(int i=0;i<A.size();i++){
       if(A[i]==target)
           return true;
   }
       return false;
}

bool isTargetPresentIn2DVector(vector<vector<int> >A, int target){
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A.size();j++){
            if(A[i][j]==target)
                return true;
        }
    }
            return false;
}
int main(){
    vector<int>B={1,3,9,6};
    if(isTargetPresent(B,3)){
        cout<<"target is present in array"<<endl;
    }
    else
        cout<<"target isn't present in array"<<endl;
    vector<vector<int>>A={{5,7,3},{8,2,1}};
    if(isTargetPresentIn2DVector(A,8)){
        cout<<"target is present in 2D vector"<<endl;
    }
    else
        cout<<"target isn't present in 2D vector"<<endl;
}
