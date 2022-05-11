#include<bits/stdc++.h>
using namespace std;

void reversestr(string &str)
{
    int n = str.size();
    for(int i=0; i<n/2 ; i++ )
    {
        swap(str[i], str[n - i - 1]);
    }
}
int main()
{
   string str;
   cin >> str;
   reversestr(str);
   cout << str;
}
