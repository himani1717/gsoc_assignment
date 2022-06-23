#include<bits/stdc++.h>
using namespace std;
vector<bool>A(3);
void recursion(string X="",string Y= "abc"){
    if(X.size()==Y.size()){
        cout<<X<<endl;
        return;
    }
    
    for(int i=0;i<Y.size();i++){
        if(A[i]==false){
            A[i]=1;
           recursion(X+Y[i],Y);
            A[i]=0;
        }
       
    }
}
int main(){
    string a="ab";
    recursion("",a);
}
