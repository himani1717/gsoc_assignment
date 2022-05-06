#include <iostream>
using namespace std;
    int gcd(int a,int b)
{
    if (b>a){
    swap(a,b);
    }
  if(a%b==0){
     return b;
  }
 return gcd(a%b,b);
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y);
    return 0;
}
