#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public: 
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int rMin = 0, rMax = r;
        int cMin = 0, cMax = c;
        int col = 0, row = 0;
        int itr = 0;
        vector<int> ans;
        
        while(itr != r*c)
        {
            if(col<cMax and row==rMin)
            {
                ans.push_back(matrix[row][col]);
                if(col==cMax-1)
                {    
                    cMax--;
                    col--;
                    row++;
                }
                col++;    
            }            
            else if(row<rMax and col==cMax)
            {
                ans.push_back(matrix[row][col]);
                if(row==rMax-1)
                {    
                    rMax--;
                    row--;
                    col--;
                }
                row++;    
            } 
            else if(col>=cMin and row==rMax)
            {
                ans.push_back(matrix[row][col]);
                if(col==cMin)
                {    
                    cMin++;
                    col++;
                    row--;
                }
                col--;    
            }  
            else if(row>rMin and col==cMin-1)
            {
                ans.push_back(matrix[row][col]);
                if(row==rMin+1)
                {    
                    rMin++;
                    row++;
                    col++;
                }
                row--;    
            }             
            itr++;
        }
        return ans;
    }
};
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}