vector<int> breakingRecords(vector<int> scores) {
     vector<int>A;
    int min=scores[0],max=scores[0],low=0,high=0;
    for (int i=1;i<scores.size();i++)
    {
        if (scores[i]<min)
        {
            min=scores[i];
            low+=1;
        }
        if (scores[i]>max)
        {
            max=scores[i];
            high+=1;
        }
    }
    A.push_back(high);
    A.push_back(low);
    return A;
}
