include<bits/stdc++.h>
using namespace std;
void printVector(vector<int>A)
{
    for(int a:A) cout<<a<<" ";
    cout << "\n";
    
}

vector<int>insertionSortMethod(int n,vector<int>A)
{
    for(int i=1;i<n;i++)
    {
        int key= A[i];
        int j=i-1;
        
        while(j>=0 && A[j]>key )
        {
            A[j+1]=A[j];
            --j;
            
            for (int k = 0; k<n ; k++)
            {
                 cout << A[k] << " " ;
                 
            }
            cout << "\n";
        }
        A[j+1]=key;
        
    }
    printVector(A);
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
    insertionSortMethod(n,A);
}
