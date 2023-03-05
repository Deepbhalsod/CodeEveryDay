#include <bits/stdc++.h>
using namespace std;

int magicalGirl(int R, int G, int B, int M, long r[], long g[], long b[]) 
{
	sort(r,r+R);
	sort(g,g+G);
	sort(b,b+B);
	
	long maximum[] = {r[R-1], g[G-1], b[B-1]};
	
	while(M--)
	{
		sort(maximum,maximum+3);
		maximum[2] /= 2;
	}
	sort(maximum,maximum+3);
	return maximum[2];
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int R,G,B,M;
	    cin>>R>>G>>B>>M;
	    long r[R],g[G],b[B];
	    
	    for(int i = 0; i < R; i++) 
        {
            cin >> r[i];
        }
	    for(int i = 0; i < G; i++) 
        {
            cin >> g[i];
        }        
	    for(int i = 0; i < B; i++) 
        {
            cin >> b[i];
        }	    
	    
	    cout << magicalGirl(R, G, B, M, r, g, b) << endl;
	}
	return 0;
}
