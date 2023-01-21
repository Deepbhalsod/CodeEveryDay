int luckBalance(int k, vector<vector<int>> contests) 
{
    int sum = 0;
    int a = 0;
    vector<int> vec;
    for(int i=0; i < contests.size(); i++) 
    {
        if (contests[i][1]==0) 
        {
            sum += contests[i][0];
            k--;
        }
        else
        {
            vec.push_back(contests[i][0]);
        }  
    }    
    sort(vec.begin(), vec.end());
    int len = vec.size();
    while(a != len)
    {
        if(k <= 0)
        {
            sum += vec[a];
        }
        else
        {
            sum -= vec[a];
        }
        k--;
        a++;
    }
    return sum;

}