class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        int len1 = str.size();
        int len2 = patt.size();
        int arr[len2];
        int min = len1;
        int i = 0;
        while(i < len2)
        {
            for(int j = 0; j < len1; j++)
            {
                if(patt[i] == str[j] && min > j)
                {
                    min = j;
                    break;
                }
            }
            i++;
        }
        return min;
    }
};