int designerPdfViewer(int h_count, int* h, char* word) 
{
    int j = 0,i = 0;
    int count=0; 
    int *heightArray; 
    heightArray = (int *)malloc(sizeof(int)*26);
    for (i = 0; i < strlen(word); i++) 
    {
        *(heightArray+i) = *(h + (*(word+i) - 'a'));
        count++;      
    }
    *(heightArray+i) = '\0'; 
    
    int max = *(heightArray+0);
    while (*(heightArray+j) != '\0')
    {
        if(max < *(heightArray+j))
        {
            max = *(heightArray+j);            
        }
        j++;
    }
    return max*count;    

}