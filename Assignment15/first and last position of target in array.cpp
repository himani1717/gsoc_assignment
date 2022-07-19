class Solution {
public:
     vector<int> searchRange(vector<int>& nums, int target) {
        int i=BinarySearch(nums,target,true);
        int j=BinarySearch(nums,target,false);
        return {j,i};
    }
    
   int BinarySearch(vector<int>&nums,int target,bool FindTarget){
        int n = nums.size();
        int low=0, high=n-1;
          int ans=-1;
        while(low<=high){
             int mid=(low+high)/2;
            if(target == nums[mid]){
                ans = mid;
            
              if(FindTarget){
                  low=mid+1;
              }
              else high=mid-1;
            }
               
            else if(nums[mid]<target){
               low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
    
};
