class Solution {
    vector<int>A;
public:
    void recursion(int i,vector<int>num,vector<vector<int>> &ans){
        if(i>=num.size()){ 
            ans.push_back(A);
            return ;
        }
        A.push_back(num[i]);
        recursion(i+1,num,ans);
        A.pop_back();
        recursion(i+1,num,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        recursion(0,nums,ans);
        return ans;
    }
};
