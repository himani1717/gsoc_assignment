#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
 int n=s.size();
 int num=sqrt(n);
 int r,c=0;
 if(num*num<n){
     c=num+1;
     r=num;
 }
 else r=num,c=num;
 
 char grid[r][c]={0};
 int index=0;
 for(int row=0; row < r;row++){
     for(int col=0;col<c;col++){
         if (index <= n - 1) {
            grid[row][col] = s.at(index);
            index++;
        }
     }
 }
 
 string encrypted = "";
    
    for (int col = 0; col < c; ++col) {
        for (int row = 0; row < r; ++row) {
            if (grid[row][col] != 0) {
                encrypted += grid[row][col];
            }
        }
        
        if (col != c - 1) {
            encrypted += " ";
        }
    }
    
    return encrypted;
}

int main()
{
     ofstream fout(getenv("OUTPUT_PATH"));
    string s;
    
    getline(cin, s);
    string result = encryption(s);
    fout << result << "\n";
    fout.close();
    return 0;
}
