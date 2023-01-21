class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int n = str1.length();
        
        string s1 = str1;
        string s2 = str1;
        
        char a = s1[n-2];
        char b = s1[n-1];
        s1[n-1] = '\0';
        s1[n-2] = '\0';
        s1 = b+s1;
        s1 = a+s1;
        
        char c = s2[0];
        char d = s2[1];
        s2[0] = '\0';
        s2[1] = '\0';
        s2 +=c;
        s2 +=d;
        
        if(s1 == str2)
        {
            return 1;
        }
        else if(s2 == str2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
        
       
        // int n = a.length();
        // //int s2 = b.length();
        // int i = 1;
        // int j = n-1;
        // int flag = 0;
        // if(a[2] == b[0])
        // {
        //     while(j >= 0)
        //     {
        //         if(i < 0)
        //         {
        //             i = n-1;
        //         }
        //         if(a[i] != b[j])
        //         {
        //             flag = 1;
        //         }
                
        //         i--;
        //         j--;

        //     }
        // }
        // else if(a[n-2] == b[0])
        // {
        //     while(j >= 0)
        //     {
        //         if(i < 0)
        //         {
        //             i = n-1;
        //         }
        //         if(b[i] != a[j])
        //         {
        //             flag = 1;
        //         }
                
        //         i--;
        //         j--;

        //     }
        // }
        // else
        // {
        //     return 0;
        // }
        // if(flag == 0)
        // {
        //     return 1;
        // }
        // else
        // {
        //     return 0;
        // }
    }

};