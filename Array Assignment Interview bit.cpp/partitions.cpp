int Solution::solve(int A, vector<int>&B) {
int sum=0;
for(int i=0;i<B.size();i++)
 {
    sum+=B[i];
 }
 int ans=0;
if(sum%3==0)
{
int num1=sum/3;
int num2=2*num1;
sum=0;
int c1=0;
  for(int i=0;i<B.size()-1;i++)
    {
      sum+=B[i];
      if(sum==num2)
       {
         ans+=c1;
       }
       if(sum==num1)
       {
    c1++;
       }
    }
}
return ans;
}    
