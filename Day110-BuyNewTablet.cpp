#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b,w,h,p;
        cin>>n>>b;
        
        int max_area=0;
        while(n--)
        {
            cin>>w>>h>>p;
            int area=h*w;
            
            if(area>max_area and p<=b)
                max_area =area;
            
        }
        if(max_area==0)
            cout << "no tablet" << endl;
        else
            cout << max_area << endl;
    }
	return 0;
}
