class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
    while(i<nums.size()-1)
    {
        if(nums[i]==nums[i+1])
        {
            return 1;
        }
        else{
            i++;
        }
    }
    return 0;
    }
};
