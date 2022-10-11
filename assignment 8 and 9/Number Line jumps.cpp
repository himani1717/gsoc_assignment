string kangaroo(int x1, int v1, int x2, int v2) {
 string ans="NO";
   int count1=0,count2=0;
   while (count1<=10000 && count2<=10000)
   {
       if (x1==x2 && count1==count2)
       {
           ans="YES";
           break;
       }
       else
       {
           x1+=v1;
           count1++;
           x2+=v2;
           count2++;
       }
   }
   return ans;
}
