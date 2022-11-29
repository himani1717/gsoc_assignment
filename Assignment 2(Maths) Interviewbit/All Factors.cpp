vector<int> Solution::allFactors(int A) {
    vector <int> v;
    set <int> s;
    for(int i=1;i<=(int)sqrt(A);i++)
    {
        if(A%i==0)
            {
            s.insert(i);
            s.insert(A/i);
            }
    }
    
    set <int > :: iterator it;
    for(it=s.begin();it!=s.end();it++)
        v.push_back(*it);
    return v;
}
