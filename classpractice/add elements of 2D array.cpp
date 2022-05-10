#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m,sum=0;
cin>>n>>m;
int arr[n][m];
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
 }
  cout<<"matrix is:"<<endl;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
 }
 cout<<"sum is:";
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
       sum=sum+arr[i][j];   
      }
 }
 cout<<sum<<endl;
 
 return 0;
}
