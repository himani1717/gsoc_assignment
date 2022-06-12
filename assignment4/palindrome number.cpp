class Solution {
public:
    bool isPalindrome(int num) {
        int num1=num;
        int rn=0;
        int max=INT_MAX/10;
        int min=INT_MIN/10;
        while(num>0){
            if(rn>max || rn<min) return 0;
            rn=rn*10+num%10;
            num=num/10;
            }
        if(rn==num1) return true;
        else return false;
        }
};
