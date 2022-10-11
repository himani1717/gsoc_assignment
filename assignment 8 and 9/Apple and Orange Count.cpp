void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
   int apple=0,orange=0;
    for (int i=0;i<apples.size();i++)
    {
        if ((apples[i]+a)>=s && (apples[i]+a)<=t)
            apple+=1;
    }
    for (int j=0;j<oranges.size();j++)
    {
        if ((oranges[j]+b)>=s && (oranges[j]+b)<=t)
            orange+=1;
    }
    cout<<apple<<"\n"<<orange;
}
