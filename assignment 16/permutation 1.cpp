class Solution {
public:
    void permutation(vector<vector<int>>&A,vector<int>&nums,int x,int y){
        if(x==y)
            A.push_back(nums);
        else{
            for(int i=x;i<=y;i++){
                swap(nums[i],nums[x]);
                permutation(A,nums,x+1,y);
                swap(nums[i],nums[x]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>A;
        int n=nums.size();
        permutation(A,nums,0,n-1);
        return A;
    }
};
