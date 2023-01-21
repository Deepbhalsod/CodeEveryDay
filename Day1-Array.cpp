#include<iostream>
using namespace std;

int targetIndex(int arr[],int target)
{
    int j;
    for(int i = 0; i < 5 ; i++)
    {
        if (arr[i]<=target)
        {
            if (arr[i]==target)
            {
                return i;
            }
        } 
        else
        {
            return i;
        }
        j = i;
    }
    return ++j;
}

int main()
{
    int arr[] = {1,3,5,6,8};
    cout<<targetIndex(arr,79);

    return 0;
}