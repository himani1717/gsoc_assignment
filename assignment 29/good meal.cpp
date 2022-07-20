class Solution {
public:
    int Mod= 1e9 + 7;
    long long countPairsForTarget(vector<int>&A,int target){
         unordered_map<int,int>mp;
        long long ans=0;
       for(int i:A){
          ans= (ans+ mp[target-i])%Mod;
           mp[i]++;
       } 
        return ans;
    }
    int countPairs(vector<int>& deliciousness) {
         long long ans=0;
        int t=1;
        int Max = *max_element(A.begin(),A.end());
        for(int i=1;i<=22;i++){
            ans=(ans+ countPairsForTarget(deliciousness,t))%Mod;
            t*=2;
            if(t>2*Max) break;
        }
          return ans;
        
            
    }
};
//time limit exceeded code
