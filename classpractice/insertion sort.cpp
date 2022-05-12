#include<bits/stdc++.h>
using namespace std;

//spaceComplexity O(1)
//Time Complexity O(n^2) => //in average case O(nlogn) 


void printVector(vector<int>A){
    for(int a:A) cout<<a<<" ";
    cout<<"\n";
}

vector<int>insertionSortMethod1(vector<int>A){
    cout<<"insertionSortMethod1: ";
    for(int i=1;i<A.size();i++){\
        cout<<"i: "<<i<<":  ";
        for(int j=i;j>0;j--){
            if(A[j]<A[j-1]){
                swap(A[j],A[j-1]);
            }
            else break;
        }
        printVector(A);
    }
    return A;
}

vector<int>insertionSortMethod2(vector<int>A){
    cout<<"insertionSortMethod2: ";
    for(int i=1;i<A.size();i++){
        int j=i-1;
        while(j>=0 && A[j]>A[i]){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=A[i];
    }
    return A;
}

int main() {
    vector<int>A = {5,4,3,6,3,4,1,2,4,6,7};
    vector<int>B= insertionSortMethod1(A);
    printVector(B);
    //printVector(insertionSortMethod2(A));
}
