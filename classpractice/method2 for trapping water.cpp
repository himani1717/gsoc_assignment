class Solution {
public:
    int trap(vector<int>& height) {
       
        int max=INT_MIN;
        int n=height.size();
        int a;
         vector<int>C(n);
        for(int i=n-1;i>=0;i--)
        {
          if(height[i]>max)
          {
              max=height[i];
              
          }
            C[i]=max;
            
        }
        for(int i = 0; i<n;i++){
            cout<<C[i]<<" ";
        }
     return 0;   
    }
};
