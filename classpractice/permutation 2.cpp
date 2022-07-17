class Solution {
public:
    vector<vector<int>> A;
    bool Swap_(vector<int>& nums,int start,int curr){
        for(int i=start; i<curr; i++)
            if(nums[curr] == nums[i])
                return false;
        return true;
    }
    void permutation(vector<int>& nums,int x,int y{
        if(x==y){
            A.push_back(nums);
        }
        else{
            for(int i=x; i<=y; i++){
            if(Swap_(nums,x,i)){
                swap(nums[x],nums[i]);
                permutation(nums,x+1,y);
                swap(nums[x],nums[i]);
            }
            }
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size()-1;
        pmt(nums,0,n);
        return A;
    }
};
