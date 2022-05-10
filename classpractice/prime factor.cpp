#include <bits/stdc++.h>
using namespace std;

//Time complexity O(n)
vector<int>getPrimeFactors(int a){
    vector<int>Factors;
    for(int i=2;i<=a;i++){
        //jb tk i se a divide hota rhega tb tk i ko Factors m push_back krta rhega
        while(a%i==0){
            cout<<"in while loop i: "<<i<<" a: "<<a<<"\n";
            Factors.push_back(i);
            a=a/i;
            cout<<"a after division: "<<a<<"\n";
        }
    }
    return Factors;
}

int main(){
    int a= 2*2*2*3*3*7*13;
    cout<<"number: "<<a<<"\n";
    vector<int>P = getPrimeFactors(a);
    cout<<"Factors: ";
    for(int i=0;i<P.size();i++){
      cout<<P[i]<<" ";   
    }
}
