#include<bits/stdc++.h>
using namespace std;
   
int p=1,s=0;
int subtractProductAndSum(int n)
{
        
    cin >> n;
    while(n>0)
    {
        p = p*(n%10);
        s =s + (n%10);
        n=n/10;
    }
    return p-s;
}
int main()
{
    int n;
    cout << subtractProductAndSum(n);
    return 0;
}
