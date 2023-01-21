    //{ Driver Code Starts
    #include <bits/stdc++.h>
    using namespace std;

    string evmHacking(int a, int b, int c, int p, int q, int r) 
    {
        float vote_to_win=(p+q+r)/2.0;
        
        if(a+b+r>vote_to_win || a+c+q>vote_to_win || b+c+p>vote_to_win)
            return "YES";
        else
            return "NO";
    }

    int main() 
    {
        int t;
        cin >> t;
        while (t--) 
        {
            int a,b,c,p,q,r;
            cin>>a>>b>>c>>p>>q>>r;
            cout << evmHacking(a, b, c, p, q, r) << endl;
        }
        return 0;
    }
