#include<bits/stdc++.h>
using namespace std;

int sumByRecursion(int i){
    cout<<"i: "<<i<<"\n";
    if(i==10) return 10;
    return i+sumByRecursion(i+1);
}

int main() {
    vector<int>A ={1,2,3,4,5,6,7};
    cout<<sumByRecursion(0);
}
