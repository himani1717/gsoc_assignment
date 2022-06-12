class Solution {
public:
    bool isprime(int n)
    {
        if (n <= 1)
        {
            return 0;
        }
        for (int i = 2; i<=sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
            
        }
        return 1;
       
    }
    int countPrimes(int b)
    {
        int count=0;
        for(int i=0;i<b;i++)
        {
            if(isprime(i)==1)
            {
                count++;
            }
        }
        return count;
    }

};
