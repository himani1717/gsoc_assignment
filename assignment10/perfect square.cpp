class Solution {
public:
    bool isPerfectSquare(int num)
    {
        int mid;
        int low=1;
        int high=num ;
        while(low<=high)
        {
            long long mid =(low+(high-low)/2);
            if(mid*mid==num)
            {
                return 1;
            }
            else if (mid*mid>num)
                
            {
                high=mid-1;
            }
            else 
            {
                low=mid+1;
            }
        }
        return 0;
    
        
        
    }
};
