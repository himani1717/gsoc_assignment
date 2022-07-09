class Solution {
public:
    bool isValid(string t) {
        stack<char>S;
        for(char ch: t){
            if(ch=='(' || ch == '{' || ch == '['){
                S.push(ch);
            }
            else {
                if(S.empty()){
                    return 0;
                }
                if((S.top()=='(' && ch==')' )|| (S.top()=='{' && ch=='}' ) || (S.top()=='[' && ch==']')){
                S.pop();
                return true;
                }
                else{
                    return 0;
                }
            }
        
         }
           if(S.empty()) {
               return true;
           }
        return false;
        
    }
};
