#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   for(int i=n;i>=1;i=i/2)
   {
       for(int j=i; j>=1;j--)
       {
           cout <<"#";
       }
       cout << endl;
   }
}
