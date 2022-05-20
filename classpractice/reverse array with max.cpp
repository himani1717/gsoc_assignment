class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>C;
        int max=INT_MIN;
        int n=height.size();
        int a;
        for(int i=n-1;i>=0;i--)
        {
          if(height[i]>max)
          {
              max=height[i];
              
          }
        
            C.push_back(max);
            
            
        }
        for(int i = n-1; i>=0;i--){
            cout<<C[i]<<" ";
        }
     return 0;   
    }
};
