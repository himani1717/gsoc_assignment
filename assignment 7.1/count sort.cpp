class Solution {
public:
    vector<int> sortArray(vector<int>& nums)
    {
        vector<int> B (1e6+2);
        for(int i=0;i<nums.size();i++)
        {
            B[nums[i]]++;
    
        }
        vector <int>C;
        for(int i=0; i<B.size() ; i++ )
        {
            for(int j=0; j<B[i] ; j++ )
            {
                C.push_back(i);
            }
        }
    
        return C;

    }
        
    
};
