#include<iostream>
using namespace std;

int getTotalScore(string[], int, int);

int main()
{
	int totalWords;
	int arraySize;

	cin>>totalWords;
    cin>>arraySize;

    string arrayOfWords[totalWords];
    for (int i = 0; i < totalWords; i++)
    {
        cin>>arrayOfWords[i];
    }
	
	getTotalScore(arrayOfWords,totalWords,arraySize);
	return 0;
}

int getTotalScore(string arrayOfWords, int totalWords, int arraySize) 
{  
    

	
}
