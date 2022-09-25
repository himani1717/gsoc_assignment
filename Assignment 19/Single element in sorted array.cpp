class Solution {
public:
    
    int singleNonDuplicate(vector<int>& nums) {
        int low =0 , high = nums.size()-1 , mid=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(mid==0)
                return nums[0];
            if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1])
                return nums[mid];
             else if(nums[mid-1]<nums[mid] && mid%2==1)
                high=mid-1;
            else if(nums[mid-1]==nums[mid] && mid%2==0)
                high=mid-1;
           
            else
                low=mid+1;
            
        }
        return nums[0];
    }
};
