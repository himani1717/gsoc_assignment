class Solution {
public:
    int countPairs(vector<int>& del) {
        int mod = 1e9 +7;
        unordered_map<int,int>s;
        int count=0;
        for(int i=0;i<del.size();i++){
            for(int j=0;j<22;j++){
                int k=1<<j;
                if(s.find(k-del[i])!=s.end()){
                    count+=s[k-del[i]];
                    count=count%mod;
                }
            }
            s[del[i]]++;
        }  
        return count;
    }
};
