class Solution {
public:
    int countSmallerOrEqual(vector<int>& nums, int k)
    {
        int ans=0;
        for(int a:nums)
        {
            if(a<=k)
            {
                ans++;
            }
        }
        return ans;
    }
    int findKthLargest(vector<int>& nums, int k)
    {
        k=nums.size()-k+1;
        int low=-10000;
        int high= 10000;
        int ans=low;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int count= countSmallerOrEqual(nums,mid);
            if(count<k)
            {
                low=mid+1;
            }
            else if(count>=k)
            {
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};
