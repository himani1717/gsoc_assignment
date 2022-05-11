#include <iostream>
using namespace std;
void return_ap(int a,int n,int d){
    int curr=a;
    for(int i=0;i<n;i++){
        cout<<curr<<" ";
        int nxt=curr+d;
        curr=nxt;
    }
}
int main() {
    int a,n,d;
    cin>>a>>n>>d;
    return_ap(a,n,d);
    return 0;
}
