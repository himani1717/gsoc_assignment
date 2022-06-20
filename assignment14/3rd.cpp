#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,len,r;
    cin>>n;
    int n1=n;
   while(n1!=0){
   	n1=n1/10;
   	len++;
   	}
   	
   	for(int i=0;i<len;i++){
   		for(int j=0;j<r;j++){
   			cout<<"#";
   		}
   		r=n%10;
   		n=n/10;
   		cout<<endl;
   	}
}
