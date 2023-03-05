int Solution::maxProfit(const vector<int> &A) 
{
    int len = A.size(); 
    if(len<2)
    {
        return 0;
    }
    vector<int> arr = A;
    sort(arr.begin(), arr.end());
    int j = len-1;
    int mn = arr[0];
    int mx = arr[len-1];
    int min_indx = 0;
    int max_indx = 0;
 
    while(true)
    {   
        for(int i=0; i<len; i++)
        {
            if(mn==A[i])
            {
                min_indx = i;
            }
            if(mx==A[i])
            {
                max_indx = i;
            }
        }
        if(min_indx<max_indx)
        {    
            return mx-mn;
        }
        else if(len==2 or len==1)
        {
            return 0;
        }
        else
        {
            --j;
            mx = arr[j];
        }
    }
}
