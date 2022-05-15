#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > multiply(vector<vector<int> >A, vector<vector<int> >B){
    vector<vector<int> >result(A.size(),vector<int>(B[0].size(),0));
    if(A[0].size()==B.size()){
        const int N=A[0].size();
        for(int i=0;i<A.size();i++){
            for(int j=0;j<B[0].size();j++){
                for(int k=0;k<A[0].size();k++)
                    result[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    
    return result;
}

int main(){
    int r1,c1;
    cout<<"Enter dimension of matrix A: ";
    cin>>r1>>c1;

    vector<vector<int> >A(r1,vector<int>(c1));
    cout<<"Enter elements of matrix A: " <<endl;
    for(auto &row:A){
        for(auto &el:row) cin>>el;
    }

    int r2,c2;
    cout<<"Enter dimension of matrix B: ";
    cin>>r2>>c2;

    vector<vector<int> >B(r2,vector<int>(c2));
    cout<<"Enter elements of matrix B:" << endl;
    for(auto &row:B){
        for(auto &el:row) cin>>el;
    }

    vector<vector<int> >C;
    C=multiply(A,B);
    cout<<"Output: \n";
    for(auto &row:C){
        for(auto &el:row) cout<<el<<" ";
        cout<<endl;
    }
    return 0;
}
