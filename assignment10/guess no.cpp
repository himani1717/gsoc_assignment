class Solution {
public:
    int guessNumber(int n) 
    {
        int pick;
        int low=1;
        int high=n ;
        while(low<=high)
        {
            int pick =(low+(high-low)/2);
            if(guess(pick)==0)
            {
                return pick;
            }
            else if (guess(pick)==1)
                
            {
                low=pick+1;
            }
            else 
            {
                high=pick-1;
            }
        }
        return 0;
    }
    
};
