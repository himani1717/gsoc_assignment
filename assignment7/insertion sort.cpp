#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int>A)
{
    for(int a:A) cout<<a<<" ";
    cout << "\n";
    
}

vector<int>insertionSortMethod1(vector<int>A)
{
    
    for(int i=1;i<A.size();i++)
    {
        for(int j=i;j>0;j--)
        {
            if(A[j]<A[j-1])
            {
                swap(A[j],A[j-1]);
            }
            else break;
        }
        printVector(A);
    }
    return A;
}



int main()
{
    int n;
    cin >>n;
    int a;
    vector<int>A;
    for (int i = 1; i <= n ; i++)
    {
        cin >> a;
        A.push_back(a);
    }
    insertionSortMethod1(A);
}
