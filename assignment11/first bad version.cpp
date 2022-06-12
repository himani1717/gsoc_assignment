class Solution {
public:
    int firstBadVersion(int n)
    {
        long long low=1;
        long long high= INT_MAX;
        int ans=low;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            if(isBadVersion(mid)==true)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
                
        }
        return ans;
        
    }
};
