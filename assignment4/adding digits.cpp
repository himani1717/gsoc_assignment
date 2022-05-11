#include<bits/stdc++.h>
using namespace std;
   
int s=0;
int Sum(int n)
{
        
    cin >> n;
    while(n>0 || s>9)
    {
        if(n == 0)
        {
            n = s;
            s = 0;
        }
        s =s + (n%10);
        n=n/10;
    }
    return s;
}
int main()
{
    int n;
    
    cout << Sum(n);
    return 0;
}
