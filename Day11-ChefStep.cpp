#include<iostream>
using namespace std;

int minimumStep(int, int);

int main()
{
    int t,a,b;
	cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b;
        cout<<minimumStep(a,b)<<endl;
    }
    
	return 0;
}

int minimumStep(int a, int b) 
{
    int m = a%b;
    int n = a/b;
       
    return m+n;	
}