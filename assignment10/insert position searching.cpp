class Solution {
public:
    int searchInsert(vector<int>& a, int target)
    {
       
    for(int i = 0 ; i < a.size() ; i++)
    {
        if(a[i] >= target)
            return i;
    }
    return a.size(); 
    }
};
