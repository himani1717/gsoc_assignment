#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp=0,count=0;
    cin>>n;
    vector<int> array(n);
    for(int i=0; i<n;i++)
    {
     cin>>array[i];
    }
    sort(array.begin(),array.end());
    temp=array[n-1];

    for(int i=0; i<n; i++)
    {
        if(temp==array[i])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
} 
