
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int i=0,j=0;
    int maxtemp=0;
    int max=0;
    for(i;i<accountsSize;i++)
    {
        j=0,maxtemp=0;
        for(j;j<*accountsColSize;j++)
        {
            maxtemp=maxtemp+accounts[i][j];
        }
        if(maxtemp>max)
        {
            max=maxtemp;
        }
    }
    return max;
        
}