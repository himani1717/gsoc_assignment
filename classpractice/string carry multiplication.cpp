#include<bits/stdc++.h>
using namespace std;

string toChar="0123456789";
string product(string a, int b)
{
    int carry=0;
    string ans = "";
    for(int i=a.size()-1;i>=0;i--){
        int total = (a[i]-'0')*b + carry;
        carry = total/10;
        int last_digit = total%10;
        ans=ans+toChar[last_digit];
    }
    if(carry>0) ans+= to_string(carry);
    reverse(ans.begin(),ans.end());
    return ans;
    
}
string multiply(string a,string b)
{
    //123, 456 => 123*6 + 123*5*10 + 123*4*100
    //            123*6 + 1230*5 + 12300*4
    string ans = "";
    return ans;
}

int main() {
    cout<<product("123",50);
}
